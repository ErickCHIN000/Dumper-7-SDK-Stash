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

// 0x190 (0x190 - 0x0)
// Function BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C.MakeTaskConditionPresentationData
struct UBP_ChallengeConditionPresentationBuilder_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2181[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	class UChallengeConditionPresentationMapping* LMappingDA;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UConditionBehaviour>     CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x88(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TSoftClassPtr<class UQuestTaskPresentationDataBuilder> CallFunc_Map_Find_Value;                           // 0xD0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2192[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Quest_Task_Presentation_Builder_Base; // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2198[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuestTaskPresentationBuilder_Base_C* CallFunc_SpawnObject_ReturnValue;                  // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeTaskConditionPresentationData_bWasCreated; // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData; // 0x128(0x68)(None)
};

// 0x320 (0x320 - 0x0)
// Function BP_ChallengeConditionPresentationBuilder.BP_ChallengeConditionPresentationBuilder_C.MakeTaskPresentationData
struct UBP_ChallengeConditionPresentationBuilder_C_MakeTaskPresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FConditionProgressDataList            TaskProgressList;                                  // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuestTaskPresentationData            OutPresentationData;                               // 0x80(0xB0)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentValue;                                      // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeTaskConditionPresentationData_bWasCreated; // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData; // 0x140(0x68)(None)
	struct FQuestTaskPresentationData            CallFunc_MakeCompoundTaskPresentationData_OutPresentationData; // 0x1A8(0xB0)(None)
	bool                                         CallFunc_MakeCompoundTaskPresentationData_ReturnValue; // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTaskConditionPresentationData> K2Node_MakeArray_Array;                            // 0x260(0x10)(ReferenceParm)
	struct FQuestTaskPresentationData            K2Node_MakeStruct_QuestTaskPresentationData;       // 0x270(0xB0)(None)
};

}
}


