#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELobbyUpdateType : uint8
{
	LUT_FinishedUpdating           = 0,
	LUT_LobbyUpdateReceived        = 1,
	LUT_MemberUpdateReceived       = 2,
	LUT_MemberStatusReceived       = 3,
	LUT_PendingDataUpdate          = 4,
	LUT_MAX                        = 5,
};

enum class EEosAccountConnectionResult : uint8
{
	Success                        = 0,
	NoConnecedId                   = 1,
	SuccessButDifferentAccountConnected = 2,
	NoConnecedIdButDifferentAccountConnected = 3,
	Error                          = 4,
	SignedOutEpicUsingSteam        = 5,
	Close                          = 6,
	EEosAccountConnectionResult_MAX = 7,
};

enum class EInputControllerType : uint8
{
	ICT_Unknown                    = 0,
	ICT_MouseKeyboard              = 1,
	ICT_Gamepad                    = 2,
	ICT_Touch                      = 3,
	ICT_MAX                        = 4,
};

enum class ESupportedAccountType : uint8
{
	SAT_Unknown                    = 0,
	SAT_Epic                       = 1,
	SAT_External                   = 2,
	SAT_MAX                        = 3,
};

enum class ECachedNATType : uint8
{
	CNT_Open                       = 0,
	CNT_Moderate                   = 1,
	CNT_Strict                     = 2,
	CNT_TBD                        = 3,
	CNT_MAX                        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


