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

// 0x11 (0x11 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.UpdateSeed
struct ABP_Mission_Communication_T2_C_UpdateSeed_Params
{
public:
	int32                                        CallFunc_GenerateNewDynamicQuestSeed_ReturnValue;  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIcarusGameStateSurvival_bValid;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameStateSurvival*              CallFunc_GetIcarusGameStateSurvival_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19C (0x19C - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.RollQuest
struct ABP_Mission_Communication_T2_C_RollQuest_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsRowHandle               Quest;                                             // 0x4(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Stream;                                            // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	struct FDynamicQuestsRowHandle               SelectedQuest;                                     // 0x24(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        ListID;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CreateNewList_ReturnValue;                // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsEnum                    CallFunc_IntToStruct_ReturnValue;                  // 0x50(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsRowHandle               CallFunc_StructToRowHandle_ReturnValue;            // 0x64(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicQuest                         CallFunc_GetDynamicQuestsStruct_DynamicQuests;     // 0x80(0x90)(None)
	enum class EValid                            CallFunc_GetDynamicQuestsStruct_Paths;             // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedListElement                  K2Node_MakeStruct_WeightedListElement;             // 0x130(0x20)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AddElement_ReturnValue;                   // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C10[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedListElement                  CallFunc_GetSelectedElement_ReturnValue;           // 0x158(0x20)(None)
	bool                                         CallFunc_RemoveList_ReturnValue;                   // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x17C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsRowHandle               CallFunc_MakeDynamicQuests_ReturnValue;            // 0x184(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.PopulateQuests
struct ABP_Mission_Communication_T2_C_PopulateQuests_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         RandomStream;                                      // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	int32                                        LocalSeed;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SeededRoll_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D79[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsRowHandle               CallFunc_RollQuest_Quest;                          // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.Deployable_Interact
struct ABP_Mission_Communication_T2_C_Deployable_Interact_Params
{
public:
	class AActor*                                Interactor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSurvival_C*  K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.SelectQuest
struct ABP_Mission_Communication_T2_C_SelectQuest_Params
{
public:
	struct FDynamicQuestsRowHandle               Quest;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.GenericActionWithCharacter
struct ABP_Mission_Communication_T2_C_GenericActionWithCharacter_Params
{
public:
	class AIcarusPlayerCharacter*                Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x550 (0x550 - 0x0)
// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.ExecuteUbergraph_BP_Mission_Communication_T2
struct ABP_Mission_Communication_T2_C_ExecuteUbergraph_BP_Mission_Communication_T2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestsRowHandle               K2Node_CustomEvent_Quest;                          // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDynamicQuestDifficulty           CallFunc_Array_Get_Item;                           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5117[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x28(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_Event_Character;                            // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIcarusGameStateSurvival_bValid;        // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_513B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameStateSurvival*              CallFunc_GetIcarusGameStateSurvival_ReturnValue;   // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5149[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x240(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FIcarusItemSpawnParametersAdvanced    K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced; // 0x270(0x38)(None)
	TArray<struct FIcarusStatReplicated>         K2Node_MakeArray_Array;                            // 0x2A8(0x10)(ReferenceParm)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters;       // 0x2B8(0x90)(None)
	TArray<struct FAlterationsEnum>              K2Node_MakeArray_Array_1;                          // 0x348(0x10)(ReferenceParm)
	struct FItemData                             CallFunc_CreateCustomItem_ReturnValue;             // 0x358(0x1F0)(ContainsInstancedReference)
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue;               // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


