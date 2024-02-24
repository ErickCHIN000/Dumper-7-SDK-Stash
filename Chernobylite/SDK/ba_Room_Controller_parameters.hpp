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

// 0x10 (0x10 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.GetObjectsToSave
struct Aba_Room_Controller_C_GetObjectsToSave_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.HasObjectsToSave
struct Aba_Room_Controller_C_HasObjectsToSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.ShouldUpdateOverlapsOnLoad
struct Aba_Room_Controller_C_ShouldUpdateOverlapsOnLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.MaxInteractionDistance
struct Aba_Room_Controller_C_MaxInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.SetActive
struct Aba_Room_Controller_C_SetActive_Params
{
public:
	bool                                         InNewActive;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.OnPlayerFocusGainedComponent
struct Aba_Room_Controller_C_OnPlayerFocusGainedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.OnPlayerFocusLostComponent
struct Aba_Room_Controller_C_OnPlayerFocusLostComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.OnInteractionPressedComponent
struct Aba_Room_Controller_C_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.Delete Room
struct Aba_Room_Controller_C_Delete_Room_Params
{
public:
	class FName                                  RoomID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.Add New Room
struct Aba_Room_Controller_C_Add_New_Room_Params
{
public:
	class FName                                  RoomID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SkillTree;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Abp_RoomWidgetController_C*>    Controllers;                                       // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  RoomDataKey;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RoomDescKey;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function ba_Room_Controller.ba_Room_Controller_C.ExecuteUbergraph_ba_Room_Controller
struct Aba_Room_Controller_C_ExecuteUbergraph_ba_Room_Controller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDayPart                          CallFunc_GetDayPart_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B61[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn_2;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit_2;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn_1;                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit_1;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_RoomID_1;                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_RoomID;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_SkillTree;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Abp_RoomWidgetController_C*>    K2Node_CustomEvent_Controllers;                    // 0x60(0x10)(ConstParm, ReferenceParm)
	class FName                                  K2Node_CustomEvent_RoomDataKey;                    // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_RoomDescKey;                    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HaveValidLevel_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


