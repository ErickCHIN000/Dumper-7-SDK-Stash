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

// 0x61 (0x61 - 0x0)
// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.TriggerNewDynamicFactionMission
struct UBP_QuestFuncitonLibrary_C_TriggerNewDynamicFactionMission_Params
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                MissionProspect;                                   // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2060[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2067[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNetworkProxyComponent*                CallFunc_GetNetworkProxyComponent_ReturnValue;     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_NetworkProxyComponentSurvival_C*   K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival; // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.TriggerNewDynamicQuest
struct UBP_QuestFuncitonLibrary_C_TriggerNewDynamicQuest_Params
{
public:
	struct FDynamicQuestsRowHandle               DynamicQuest;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class EDynamicQuestDifficulty           Difficulty;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQuestManager*                         CallFunc_GetQuestManager_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GenerateNewDynamicQuestSeed_ReturnValue;  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GenerateNewDynamicQuestSeed
struct UBP_QuestFuncitonLibrary_C_GenerateNewDynamicQuestSeed_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RollMax_ReturnValue;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIcarusGameStateSurvival_bValid;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameStateSurvival*              CallFunc_GetIcarusGameStateSurvival_ReturnValue;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetDefaultQuestModifierClass
struct UBP_QuestFuncitonLibrary_C_GetDefaultQuestModifierClass_Params
{
public:
	struct FQuestModifiersMultiRowHandle         RowHandle;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      ReturnValue;                                       // 0x20(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	enum class EQuestModifiersTableType          Temp_byte_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestModifiersTableType          CallFunc_Break_OutEnum;                            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_220E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Break_OutName;                            // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2212[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UQuestModifierBase>      Temp_softclass_Variable;                           // 0x58(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      Temp_softclass_Variable_1;                         // 0x80(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      Temp_softclass_Variable_2;                         // 0xA8(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      Temp_softclass_Variable_3;                         // 0xD0(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      K2Node_Select_Default;                             // 0xF8(0x28)(HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C.GetQuestModifierClass
struct UBP_QuestFuncitonLibrary_C_GetQuestModifierClass_Params
{
public:
	struct FQuestModifiersMultiRowHandle         RowHandle;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      ReturnValue;                                       // 0x20(0x28)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UQuestModifierBase>      CallFunc_GetDefaultQuestModifierClass_ReturnValue; // 0x50(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UQuestModifierBase>      CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass; // 0x78(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetQuestModifierClassFromRow_ReturnValue; // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UQuestModifierBase>      K2Node_Select_Default;                             // 0xA8(0x28)(HasGetValueTypeHash)
};

}
}


