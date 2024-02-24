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

// 0x9A (0x9A - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.IsCurrentRealmInfo
struct UBPFL_RealmHistoryLog_C_IsCurrentRealmInfo_Params
{
public:
	struct FS_Persisted_RealmVisitedInfo         RealmInfo;                                         // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentRealm;                                    // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentRealmID_Success;                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_; // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18A (0x18A - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmInfo_CurrentRealm
struct UBPFL_RealmHistoryLog_C_GetRealmInfo_CurrentRealm_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Persisted_RealmVisitedInfo         RealmInfo;                                         // 0x10(0x78)(Parm, OutParm, HasGetValueTypeHash)
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue;             // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentRealmPower_RealmPower;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentInfluenceLevels_Success;        // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRealmInfluenceValues                 CallFunc_GetCurrentInfluenceLevels_Influence_Levels; // 0xB8(0x10)(NoDestructor)
	bool                                         CallFunc_GetCurrentRealmTags_Success;              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetCurrentRealmTags_RealmTags;            // 0xD0(0x20)(None)
	bool                                         CallFunc_GetCurrentRealmID_Success;                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_; // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3400[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Persisted_RealmVisitedInfo         K2Node_MakeStruct_S_Persisted_RealmVisitedInfo;    // 0x110(0x78)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetCurrentRealmID
struct UBPFL_RealmHistoryLog_C_GetCurrentRealmID_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RealmID__Deployment_Id_;                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_343C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameStateBase*                     K2Node_DynamicCast_AsNWXGame_State_Base;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1CF (0x1CF - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmInfo_ViaRealmID
struct UBPFL_RealmHistoryLog_C_GetRealmInfo_ViaRealmID_Params
{
public:
	class FString                                RealmID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRespiteRealm;                                    // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3487[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Persisted_RealmVisitedInfo         RealmInfo;                                         // 0x20(0x78)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmHistory_VisitedRealms_Success;    // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3489[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Persisted_RealmVisitedInfo> CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo; // 0xA0(0x10)(ReferenceParm)
	struct FS_Persisted_RealmVisitedInfo         CallFunc_Array_Get_Item;                           // 0xB0(0x78)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmHistory_RespiteRealmInfo_Success; // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3498[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location; // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Persisted_RealmVisitedInfo         CallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo; // 0x148(0x78)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistory_RespiteRealmInfo
struct UBPFL_RealmHistoryLog_C_GetRealmHistory_RespiteRealmInfo_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Respite_Level_Location;                            // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Persisted_RealmVisitedInfo         RealmInfo;                                         // 0x28(0x78)(Parm, OutParm, HasGetValueTypeHash)
	class UBP_RealmHistory_Persistence_C*        CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component; // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmHistoryComponent_Success;         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Persisted_RealmVisitedInfo         K2Node_MakeStruct_S_Persisted_RealmVisitedInfo;    // 0xB0(0x78)(HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistory_VisitedRealms
struct UBPFL_RealmHistoryLog_C_GetRealmHistory_VisitedRealms_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3532[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Persisted_RealmVisitedInfo> VisitedRealmInfo;                                  // 0x10(0x10)(Parm, OutParm)
	class UBP_RealmHistory_Persistence_C*        CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmHistoryComponent_Success;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C.GetRealmHistoryComponent
struct UBPFL_RealmHistoryLog_C_GetRealmHistoryComponent_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RealmHistory_Persistence_C*        Realm_History_Persistence_Component;               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RealmHistory_Persistence_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


