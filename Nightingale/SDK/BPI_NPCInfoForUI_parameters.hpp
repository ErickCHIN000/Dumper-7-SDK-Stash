#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetContractInfo
struct IBPI_NPCInfoForUI_C_GetContractInfo_Params
{
public:
	bool                                         OnContract;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 EmployerPawn;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        ContractCost;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OrderTarget;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetFriendship
struct IBPI_NPCInfoForUI_C_GetFriendship_Params
{
public:
	enum class Enum_FriendshipLevel              FriendshipLevel;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FriendshipScore;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBestFriend;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FriendshipLevelRatio;                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FriendshipLevelScore;                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FriendshipLevelMaxScore;                           // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BPI_NPCInfoForUI.BPI_NPCInfoForUI_C.GetCreatureInfo
struct IBPI_NPCInfoForUI_C_GetCreatureInfo_Params
{
public:
	class FText                                  UIName;                                            // 0x0(0x18)(Parm, OutParm)
	class FText                                  UIDescription;                                     // 0x18(0x18)(Parm, OutParm)
	class UTexture2D*                            UIIcon;                                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


