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
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.GetPresentationBuilderForChildCondition
struct UBP_QuestTaskPresentationBuilder_Base_C_GetPresentationBuilderForChildCondition_Params
{
public:
	int32                                        ConditionIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuestTaskPresentationBuilder_Base_C* PresentationBuilder;                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x3B9 (0x3B9 - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeFirstInCompoundTaskPresentationData
struct UBP_QuestTaskPresentationBuilder_Base_C_MakeFirstInCompoundTaskPresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FConditionProgressDataList            TaskProgressList;                                  // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuestTaskPresentationData            OutPresentationData;                               // 0x80(0xB0)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_256F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x138(0x68)(Edit, BlueprintVisible)
	class UCompoundCondition*                    CompoundCondition;                                 // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompoundCondition*                    K2Node_DynamicCast_AsCompound_Condition;           // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2589[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTaskConditionPresentationData> K2Node_MakeArray_Array;                            // 0x1C0(0x10)(ReferenceParm)
	struct FQuestTaskPresentationData            CallFunc_BuildReadyToCompletePresentationData_PresentationData; // 0x1D0(0xB0)(None)
	bool                                         CallFunc_BuildReadyToCompletePresentationData_bWasBuilt; // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2592[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskPresentationData            K2Node_MakeStruct_QuestTaskPresentationData;       // 0x288(0xB0)(None)
	class UConditionBehaviour*                   CallFunc_Array_Get_Item;                           // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeTaskConditionPresentationData_bWasCreated; // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData; // 0x348(0x68)(None)
	bool                                         CallFunc_IsTaskReadyToComplete_bIsReadyToComplete; // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x634 (0x634 - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeCompoundTaskPresentationData
struct UBP_QuestTaskPresentationBuilder_Base_C_MakeCompoundTaskPresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FConditionProgressDataList            TaskProgressList;                                  // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuestTaskPresentationData            OutPresentationData;                               // 0x80(0xB0)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuestTaskCompletionRequirements  TaskCompletionRequirements;                        // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2796[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetValue;                                       // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NewTaskName;                                       // 0x138(0x18)(Edit, BlueprintVisible)
	struct FQuestTaskPresentationData            QuestTaskPresentationData;                         // 0x150(0xB0)(Edit, BlueprintVisible)
	TArray<struct FQuestTaskConditionPresentationData> QuestTaskConditions;                               // 0x200(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentIndex;                                      // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConditionBehaviour*                   CurrentCondition;                                  // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDefaultProgressData;                           // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionPersistentData>      ProgressDataList;                                  // 0x228(0x10)(Edit, BlueprintVisible)
	TArray<class UConditionBehaviour*>           ConditionsList;                                    // 0x238(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentValue;                                      // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCompoundConditionAnd*                 K2Node_DynamicCast_AsCompound_Condition_And;       // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x26C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompoundConditionOr*                  K2Node_DynamicCast_AsCompound_Condition_Or;        // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_QuestTaskPresentationBuilder_Base_C* CallFunc_GetPresentationBuilderForChildCondition_PresentationBuilder; // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionPersistentData              K2Node_MakeStruct_ConditionPersistentData;         // 0x29C(0x8)(NoDestructor)
	uint8                                        Pad_2808[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskPresentationData            CallFunc_BuildReadyToCompletePresentationData_PresentationData; // 0x2A8(0xB0)(None)
	bool                                         CallFunc_BuildReadyToCompletePresentationData_bWasBuilt; // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTaskReadyToComplete_bIsReadyToComplete; // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x35A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_281A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConditionPersistentData              CallFunc_Array_Get_Item;                           // 0x368(0x8)(NoDestructor)
	struct FConditionPersistentData              CallFunc_Array_Get_Item_1;                         // 0x370(0x8)(NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConditionBehaviour*                   CallFunc_Array_Get_Item_2;                         // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2852[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_285B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3A0(0x50)(HasGetValueTypeHash)
	struct FQuestTaskConditionPresentationData   CallFunc_Array_Get_Item_3;                         // 0x3F0(0x68)(None)
	struct FQuestTaskConditionPresentationData   CallFunc_Array_Get_Item_4;                         // 0x458(0x68)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x4C0(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_286D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x518(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2870[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x530(0x18)(None)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue_1;           // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeTaskConditionPresentationData_bWasCreated; // 0x549(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_288D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData; // 0x550(0x68)(None)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue_1;                        // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue_2;                        // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_289C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   K2Node_SetFieldsInStruct_StructOut;                // 0x5C8(0x68)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7B (0x7B - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.IsTaskReadyToComplete
struct UBP_QuestTaskPresentationBuilder_Base_C_IsTaskReadyToComplete_Params
{
public:
	struct FTask                                 GivenTask;                                         // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        CurrentValue;                                      // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetValue;                                       // 0x74(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReadyToComplete;                                // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidTaskCompleterRow_bIsTaskReadyToComplete; // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68D (0x68D - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.BuildReadyToCompletePresentationData
struct UBP_QuestTaskPresentationBuilder_Base_C_BuildReadyToCompletePresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FQuestTaskPresentationData            PresentationData;                                  // 0x70(0xB0)(Parm, OutParm)
	bool                                         bWasBuilt;                                         // 0x120(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuestGiverName;                                    // 0x128(0x18)(Edit, BlueprintVisible)
	TArray<struct FQuestTaskConditionPresentationData> ItemTaskConditions;                                // 0x140(0x10)(Edit, BlueprintVisible)
	struct FQuestTaskPresentationData            TaskPresentationData;                              // 0x150(0xB0)(Edit, BlueprintVisible)
	class FText                                  NewTaskName;                                       // 0x200(0x18)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestGiverTableRow                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x220(0xA8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2D8(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x328(0x50)(HasGetValueTypeHash)
	struct FQuestTaskPresentationData            K2Node_MakeStruct_QuestTaskPresentationData;       // 0x378(0xB0)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x428(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x438(0x18)(None)
	struct FItemConstraint                       CallFunc_Array_Get_Item;                           // 0x450(0x40)(ContainsInstancedReference)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0x490(0x68)(None)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTaskConditionPresentationData> K2Node_MakeArray_Array_1;                          // 0x500(0x10)(ReferenceParm)
	struct FItemConstraintPresentationData       CallFunc_GetItemConstraintUIData_OutPresentationData; // 0x510(0x88)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x598(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x5F0(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x608(0x18)(None)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData_1; // 0x620(0x68)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x68C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.HasValidTaskCompleterRow
struct UBP_QuestTaskPresentationBuilder_Base_C_HasValidTaskCompleterRow_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         bIsTaskReadyToComplete;                            // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.GetCreatureDataTable
struct UBP_QuestTaskPresentationBuilder_Base_C_GetCreatureDataTable_Params
{
public:
	class UDataTable*                            CreatureDataTable;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_Base_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
};

// 0x390 (0x390 - 0x0)
// Function BP_QuestTaskPresentationBuilder_Base.BP_QuestTaskPresentationBuilder_Base_C.MakeTaskPresentationData
struct UBP_QuestTaskPresentationBuilder_Base_C_MakeTaskPresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FConditionProgressDataList            TaskProgressList;                                  // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQuestTaskPresentationData            OutPresentationData;                               // 0x80(0xB0)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x138(0x68)(Edit, BlueprintVisible)
	int32                                        CurrentValue;                                      // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTaskConditionPresentationData> K2Node_MakeArray_Array;                            // 0x1A8(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskPresentationData            CallFunc_BuildReadyToCompletePresentationData_PresentationData; // 0x1C0(0xB0)(None)
	bool                                         CallFunc_BuildReadyToCompletePresentationData_bWasBuilt; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTaskReadyToComplete_bIsReadyToComplete; // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeTaskConditionPresentationData_bWasCreated; // 0x273(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_MakeTaskConditionPresentationData_ConditionPresentationData; // 0x278(0x68)(None)
	struct FQuestTaskPresentationData            K2Node_MakeStruct_QuestTaskPresentationData;       // 0x2E0(0xB0)(None)
};

}
}


