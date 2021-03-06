#pragma once
#include "zinx.h"

#include <iostream>

class GameChannel;
class GameRole;


class GameProtocol :
	public Iprotocol
{
public:
	GameProtocol();
	virtual ~GameProtocol();

	// 通过 Iprotocol 继承
	virtual UserData * raw2request(std::string _szInput) override;
	virtual std::string * response2raw(UserData & _oUserData) override;
	virtual Irole * GetMsgProcessor(UserDataMsg & _oUserDataMsg) override;
	virtual Ichannel * GetMsgSender(BytesMsg & _oBytes) override;

public:
	GameChannel *mChannel = nullptr;
	GameRole *mRole = nullptr;

	std::string mLastBuf;
};

