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

// 0xB78 (0xB78 - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.GetPlayerLoadoutData
struct UUMG_SpaceMenu_Cargo_C_GetPlayerLoadoutData_Params
{
public:
	struct FPlayerLoadoutData                    LoadoutData;                                       // 0x0(0x3D0)(Parm, OutParm, ContainsInstancedReference)
	bool                                         CallFunc_GetInsuranceEnabled_Insured;              // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_554A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutData                    CallFunc_GetPlayerLoadoutData_LoadoutData;         // 0x3D8(0x3D0)(ContainsInstancedReference)
	struct FPlayerLoadoutData                    K2Node_SetFieldsInStruct_StructOut;                // 0x7A8(0x3D0)(ContainsInstancedReference)
};

// 0x2 (0x2 - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.GetInsuranceEnabled
struct UUMG_SpaceMenu_Cargo_C_GetInsuranceEnabled_Params
{
public:
	bool                                         Insured;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetInsuranceEnabled_Insured;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Initialise
struct UUMG_SpaceMenu_Cargo_C_Initialise_Params
{
public:
	TArray<struct FMetaItem>                     LoadoutInventory;                                  // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<struct FMetaItem>                     Meta_Inventory;                                    // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FDropship>                     Dropships;                                         // 0x20(0x10)(Edit, BlueprintVisible)
};

// 0x3C (0x3C - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Tick
struct UUMG_SpaceMenu_Cargo_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.SetPendingProspectInfo
struct UUMG_SpaceMenu_Cargo_C_SetPendingProspectInfo_Params
{
public:
	struct FProspectInfo                         ProspectInfo;                                      // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x100 (0x100 - 0x0)
// Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.ExecuteUbergraph_UMG_SpaceMenu_Cargo
struct UUMG_SpaceMenu_Cargo_C_ExecuteUbergraph_UMG_SpaceMenu_Cargo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5697[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_DynamicCast_AsIcarus_Player_Character;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         K2Node_CustomEvent_ProspectInfo;                   // 0x70(0x90)(None)
};

}
}


