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

// 0x761 (0x761 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.CanOverrideSimilarInfusion
struct UBPFL_Crafting_C_CanOverrideSimilarInfusion_Params
{
public:
	struct FInventoryEntry                       Infusion;                                          // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInventoryEntry                       Item;                                              // 0x2F0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x5E0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideOnly;                                      // 0x5E8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstanceData_AttributeModifiers      CallFunc_TryGetItemAttributeModifiers_Modifiers;   // 0x5F0(0x20)(None)
	enum class EGetResult                        CallFunc_TryGetItemAttributeModifiers_Branches;    // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x611(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x612(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F47[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x614(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_TryConstructItemAttributeModifier_Branches; // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedItemAttributeModifier       CallFunc_TryConstructItemAttributeModifier_ReturnValue; // 0x620(0x90)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedItemAttributeModifier       CallFunc_Array_Get_Item;                           // 0x6C0(0x90)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FItemAttributeModifierReference_ReturnValue; // 0x751(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue; // 0x752(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x753(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x754(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x75C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x723 (0x723 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.DoItemsShareModifiers
struct UBPFL_Crafting_C_DoItemsShareModifiers_Params
{
public:
	struct FInventoryEntry                       Item_A;                                            // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInventoryEntry                       Item_B;                                            // 0x2F0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x5E0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         DoesShare;                                         // 0x5E8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_TryConstructItemAttributeModifier_Branches; // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FF5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedItemAttributeModifier       CallFunc_TryConstructItemAttributeModifier_ReturnValue; // 0x5F0(0x90)(None)
	enum class EGetResult                        CallFunc_TryConstructItemAttributeModifier_Branches_1; // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FFD[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedItemAttributeModifier       CallFunc_TryConstructItemAttributeModifier_ReturnValue_1; // 0x690(0x90)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoAttributeModifiersShareCharacteristic_ReturnValue; // 0x721(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x722(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetDeltaTimer
struct UBPFL_Crafting_C_GetDeltaTimer_Params
{
public:
	double                                       Clamped;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Base;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Modifer;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Delta_Result;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6086[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6099[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetStepRefinementTimerLength
struct UBPFL_Crafting_C_GetStepRefinementTimerLength_Params
{
public:
	struct FS_Crafting_Step_Definition           StepData;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6184[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x60(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Return_Value;                                      // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Delta;                                             // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMinimumCraftingTimeAllowed_ReturnValue; // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_618E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetCurrentRefinementMod_Time;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Crafting_Step_RefinementTimer      CallFunc_GetStructByType_OutStruct;                // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructByType_ReturnValue;              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6195[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_MathExpression_ReturnValue;                 // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_Min_ImplicitCast;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetDeltaTimer_ReturnValue;                // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MathExpression_MinTime_ImplicitCast;        // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MathExpression_TimerBase_ImplicitCast;      // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetDeltaTimer_Base_ImplicitCast;          // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x192 (0x192 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.DoesPlayerHaveRecipeUnlocked
struct UBPFL_Crafting_C_DoesPlayerHaveRecipeUnlocked_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6222[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsUnlocked;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6242[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface;       // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_624C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   CallFunc_MakeSkillDataReferenceFromCraftingRecipeReference_ReturnValue; // 0xB0(0xE0)(HasGetValueTypeHash)
	bool                                         CallFunc_HasSkillFullyUnlocked_ReturnValue;        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A8 (0x3A8 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeTimeRequired
struct UBPFL_Crafting_C_GetRecipeTimeRequired_Params
{
public:
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_636B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        CraftAmount;                                       // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6375[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       OutTimeRequired;                                   // 0x90(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDeltaTime;                                      // 0x98(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseTraitsDelta;                                   // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RefinementModifier;                                // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6384[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       RecipeData;                                        // 0xB0(0x120)(Edit, BlueprintVisible, ContainsInstancedReference)
	double                                       CurrentTimeRequired;                               // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x1D8(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6398[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x320(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_Step_Definition           CallFunc_GetDataTableRowFromName_OutRow;           // 0x338(0x50)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetStepRefinementTimerLength_Return_Value; // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetStepRefinementTimerLength_Delta;       // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x263 (0x263 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsRecipeMultiCraftable
struct UBPFL_Crafting_C_IsRecipeMultiCraftable_Params
{
public:
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x80(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x1A8(0x48)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue_1;       // 0x1F8(0x48)(None)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x240(0x20)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue_1; // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x262(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35B (0x35B - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.AreQuantityConstraintsSatisfied
struct UBPFL_Crafting_C_AreQuantityConstraintsSatisfied_Params
{
public:
	struct FCraftingConstraintSet                ConstraintSet;                                     // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                        Pad_6571[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InputItem;                                         // 0x60(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x358(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x35A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B1 (0x5B1 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.AreCharacteristicConstraintsSatisfied
struct UBPFL_Crafting_C_AreCharacteristicConstraintsSatisfied_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FCharacteristicDataReference>  CharacteristicConstraints;                         // 0x2F0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x308(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6645[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacteristicDataReference>  ItemSecondaryCharacteristics;                      // 0x310(0x10)(Edit, BlueprintVisible)
	struct FCharacteristicDataReference          ItemPrimaryCharacteristic;                         // 0x320(0x90)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FCharacteristicDataReference          CurrentConstraintToSatisfy;                        // 0x3B0(0x90)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ConstraintSatisfied;                               // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6651[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x449(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x44A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_665F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6663[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacteristicDataReference>  CallFunc_TryGetItemAdditionalCharacteristicsReference_CharacteristicsReference; // 0x458(0x10)(ReferenceParm)
	enum class EGetResult                        CallFunc_TryGetItemAdditionalCharacteristicsReference_Branches; // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6670[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacteristicDataReference          CallFunc_TryGetItemPrimaryCharacteristicReference_CharacteristicReference; // 0x470(0x90)(HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_TryGetItemPrimaryCharacteristicReference_Branches; // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x502(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x503(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_667E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacteristicDataReference          CallFunc_Array_Get_Item;                           // 0x510(0x90)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FCharacteristicDataReference_ReturnValue; // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_669B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x549 (0x549 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.DoesActorHaveCraftingTraits
struct UBPFL_Crafting_C_DoesActorHaveCraftingTraits_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCraftingSlotTrait>            Traits;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCraftingRecipe                       CraftingRecipe;                                    // 0x18(0x120)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x138(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x140(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6825[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingSlotTrait                    CurrentEnvironmentalConstraint;                    // 0x148(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UAbilitySystemComponent*               ActorASC;                                          // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeSlotType               EnvironmentalConstraintSlot;                       // 0x160(0xA8)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6832[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x218(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x268(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2B8(0x10)(ReferenceParm)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2D8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x2F0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x308(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x318(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x368(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x378(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x3A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x3B0(0x20)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAllTags_ReturnValue;                   // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6861[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x3D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCraftingSlotTrait                    CallFunc_Array_Get_Item;                           // 0x3E0(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6868[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x3F8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x410(0x50)(HasGetValueTypeHash)
	struct FCraftingRecipeSlotType               CallFunc_GetDataTableRowFromName_OutRow;           // 0x460(0xA8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6874[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x510(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x520(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x538(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x290 (0x290 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetDataForSlotType
struct UBPFL_Crafting_C_GetDataForSlotType_Params
{
public:
	struct FDataTableRowHandle                   SlotTypeRowHandle;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6923[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeSlotType               SlotTypeData;                                      // 0x20(0xA8)(Parm, OutParm)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xC8(0x18)(None)
	struct FCraftingRecipeSlotType               CallFunc_GetDataTableRowFromName_OutRow;           // 0xE0(0xA8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6931[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x190(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x1E0(0x18)(None)
	bool                                         CallFunc_IsDataTableStructType_ReturnValue;        // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6939[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x200(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x250(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6946[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x268(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1B9 (0x1B9 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipesForDisciplinesFromUnlocked
struct UBPFL_Crafting_C_GetCraftingRecipesForDisciplinesFromUnlocked_Params
{
public:
	TArray<struct FGameplayTag>                  RequestedDisciplines;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FS_UnlockedRecipes                    UnlockedRecipes;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCraftingRecipeReference>      Recipes;                                           // 0x28(0x10)(Parm, OutParm)
	TArray<struct FCraftingRecipeReference>      LUnlockedRecipes;                                  // 0x38(0x10)(Edit, BlueprintVisible)
	uint8                                        Pad_6A12[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CurrentRecipeID;                                   // 0x50(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FCraftingRecipeReference>      FoundRecipes;                                      // 0xC0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A1E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CallFunc_Array_Get_Item;                           // 0xE0(0x70)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_GetRecipeDisciplines_CraftingDisciplines; // 0x160(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x178(0x20)(None)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1; // 0x198(0x20)(None)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B9 (0x1B9 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingOutputPreview
struct UBPFL_Crafting_C_GetCraftingOutputPreview_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               InputMaterials;                                    // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                Crafter;                                           // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Station;                                           // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               PreviewItems;                                      // 0xA0(0x10)(Parm, OutParm)
	int32                                        ResultIndex;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemProcessingDataAsset*>      ItemProcessing;                                    // 0xB8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FInventoryEntry>               Preview;                                           // 0xC8(0x10)(Edit, BlueprintVisible)
	class UObject*                               CurrentResultItem;                                 // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Crafting_Recipe_Result_Loaded> LoadedCraftingOutputs;                             // 0xE0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_TryCreateCraftingContext_Branches;        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemProcessingContext                CallFunc_TryCreateCraftingContext_ReturnValue;     // 0x110(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               K2Node_MakeArray_Array;                            // 0x140(0x10)(ReferenceParm)
	bool                                         CallFunc_GetCraftingOutputs_Success;               // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCraftingResultObject*>         CallFunc_GetCraftingOutputs_Results;               // 0x158(0x10)(ReferenceParm)
	class UCraftingResultObject*                 CallFunc_Array_Get_Item;                           // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemProcessingObjectInterface> K2Node_DynamicCast_AsItem_Processing_Object_Interface; // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ProcessData_bSuccess;                     // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BDE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemProcessingDataAsset*>      CallFunc_ProcessData_ReturnValue;                  // 0x190(0x10)(ReferenceParm, ContainsInstancedReference)
	class UItemProcessingDataAsset*              CallFunc_Array_Get_Item_1;                         // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCrafting_Result_Items_DataAsset*      K2Node_DynamicCast_AsCrafting_Result_Items_Data_Asset; // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.UpdateDynamicStructVariable
struct UBPFL_Crafting_C_UpdateDynamicStructVariable_Params
{
public:
	struct FDynamicTypedStructs                  DynamicStruct;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FJsonStruct                           Update;                                            // 0x10(0x118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDynamicTypedStructs                  CallFunc_UpdateDynamicStructs_DynamicStructOut;    // 0x130(0x10)(None)
};

// 0x1C2 (0x1C2 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingStepsForRecipe
struct UBPFL_Crafting_C_GetCraftingStepsForRecipe_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           RecipeSteps;                                       // 0x80(0x10)(Parm, OutParm)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0xA0(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x382 (0x382 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeFromHandle
struct UBPFL_Crafting_C_GetRecipeFromHandle_Params
{
public:
	struct FDataTableRowHandle                   RecipeHandle;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       ReturnValue;                                       // 0x20(0x120)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	struct FCraftingRecipe                       RecipeDefinition;                                  // 0x140(0x120)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x260(0x120)(ContainsInstancedReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x115 (0x115 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetStepDefinitionFromHandle
struct UBPFL_Crafting_C_GetStepDefinitionFromHandle_Params
{
public:
	struct FDataTableRowHandle                   StepHandle;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_Step_Definition           ReturnValue;                                       // 0x20(0x50)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_Crafting_Step_Definition           StepData;                                          // 0x70(0x50)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_Crafting_Step_Definition           CallFunc_GetDataTableRowFromName_OutRow;           // 0xC0(0x50)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue_1;               // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C2 (0x1C2 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeVariants
struct UBPFL_Crafting_C_GetRecipeVariants_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingRecipeReference>      ReturnValue;                                       // 0x80(0x10)(Parm, OutParm, ReturnParm)
	TArray<struct FCraftingRecipeReference>      K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0xA0(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51C (0x51C - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.FindBestCraftingRecipeVariant
struct UBPFL_Crafting_C_FindBestCraftingRecipeVariant_Params
{
public:
	class AActor*                                Crafter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftingStation;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipeReference              BaseRecipeID;                                      // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        RequestedQuantity;                                 // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7037[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7048[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              ReturnValue;                                       // 0xB0(0x70)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	struct FCraftingRecipeReference              CurrentVariantID;                                  // 0x120(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int32>                                InputSlotQuantities;                               // 0x190(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          InputSlotItemIDs;                                  // 0x1A0(0x10)(Edit, BlueprintVisible)
	int32                                        InputQuantity;                                     // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7059[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              DiscoveredRecipe;                                  // 0x1C0(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x235(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRecipeVariants_Success;                // 0x236(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7068[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingRecipeReference>      CallFunc_GetRecipeVariants_ReturnValue;            // 0x238(0x10)(ReferenceParm)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x248(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CallFunc_Array_Get_Item;                           // 0x370(0x70)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_707D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7087[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_708E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe_1;    // 0x3F8(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches_1;          // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRecipeSatisfied_ReturnValue;            // 0x51A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRecipeSatisfied_ReturnValue_1;          // 0x51B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A2 (0x1A2 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsRecipeVariant
struct UBPFL_Crafting_C_IsRecipeVariant_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7111[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x80(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipesForDisciplines
struct UBPFL_Crafting_C_GetCraftingRecipesForDisciplines_Params
{
public:
	TArray<struct FGameplayTag>                  RequestedDisciplines;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCraftingRecipeReference>      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm)
	struct FDataTableRowHandle                   CurrentRecipeID;                                   // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           FoundRecipes;                                      // 0x38(0x10)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x48(0x20)(None)
	TArray<struct FCraftingRecipeReference>      CallFunc_FindAllCraftingRecipesWithDisciplines_ReturnValue; // 0x68(0x10)(ReferenceParm)
};

// 0x1AA (0x1AA - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeDisciplines
struct UBPFL_Crafting_C_GetRecipeDisciplines_Params
{
public:
	struct FCraftingRecipeReference              RecipeReference;                                   // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CraftingDisciplines;                               // 0x78(0x10)(Parm, OutParm)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x88(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x419 (0x419 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSlotSatisfiedByNumber
struct UBPFL_Crafting_C_IsConstraintSlotSatisfiedByNumber_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        ConstraintSlotNumber;                              // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7274[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InputItem;                                         // 0x80(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x378(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRecipeSlots_Success;                   // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_728E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingConstraintSlot>       CallFunc_GetRecipeSlots_ReturnValue;               // 0x380(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FCraftingConstraintSlot               CallFunc_Array_Get_Item;                           // 0x390(0x88)(ContainsInstancedReference)
	bool                                         CallFunc_IsConstraintSlotSatisfied_Success;        // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9C (0x9C - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeSlotCount
struct UBPFL_Crafting_C_GetRecipeSlotCount_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_731F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotCount;                                         // 0x7C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRecipeSlots_Success;                   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7328[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingConstraintSlot>       CallFunc_GetRecipeSlots_ReturnValue;               // 0x88(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C2 (0x1C2 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeSlots
struct UBPFL_Crafting_C_GetRecipeSlots_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x78(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingConstraintSlot>       ReturnValue;                                       // 0x80(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<struct FCraftingConstraintSlot>       K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0xA0(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B2 (0x1B2 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetRecipeDisplayName
struct UBPFL_Crafting_C_GetRecipeDisplayName_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Display_Name;                                      // 0x78(0x18)(Parm, OutParm)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x90(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20A (0x20A - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingOutputs
struct UBPFL_Crafting_C_GetCraftingOutputs_Params
{
public:
	struct FCraftingRecipeReference              RecipeId;                                          // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCraftingResultObject*>         Results;                                           // 0x88(0x10)(Parm, OutParm)
	class FString                                Suffix;                                            // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                RecipeResultAmounts;                               // 0xA8(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          RecipeResultIDs;                                   // 0xB8(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentIndex;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentResult;                                     // 0xCC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7502[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_ItemWithQuantity>           ResultItems;                                       // 0xD8(0x10)(Edit, BlueprintVisible)
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0xE8(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetUniqueItemQuantities
struct UBPFL_Crafting_C_GetUniqueItemQuantities_Params
{
public:
	TArray<class FName>                          ItemIDs;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                ItemQuantities;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          UniqueIDs;                                         // 0x28(0x10)(Parm, OutParm)
	TArray<int32>                                TotalQuantities;                                   // 0x38(0x10)(Parm, OutParm)
	int32                                        CurrentFoundValue;                                 // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentFoundIndex;                                 // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Totals;                                            // 0x50(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          FoundIDs;                                          // 0x60(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7605[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_2;                         // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_3;                         // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7621[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x269 (0x269 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.GetCraftingRecipe
struct UBPFL_Crafting_C_GetCraftingRecipe_Params
{
public:
	struct FDataTableRowHandle                   RecipeId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7695[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       ReturnValue;                                       // 0x20(0x120)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	bool                                         CallFunc_IsDataTableStructType_ReturnValue;        // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7696[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x148(0x120)(ContainsInstancedReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsValidRecipe
struct UBPFL_Crafting_C_IsValidRecipe_Params
{
public:
	struct FDataTableRowHandle                   RecipeId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidRowHandle_IsValid;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDataTableStructType_ReturnValue;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.HasGameplayTagByName
struct UBPFL_Crafting_C_HasGameplayTagByName_Params
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  TagArray;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasTag;                                            // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDebugStringFromGameplayTag_ReturnValue; // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39A (0x39A - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSlotSatisfied
struct UBPFL_Crafting_C_IsConstraintSlotSatisfied_Params
{
public:
	struct FCraftingConstraintSlot               ConstraintSlot;                                    // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	uint8                                        Pad_786F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InputItem;                                         // 0x90(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x388(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_787A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraintMatchData              CallFunc_IsItemConstraintMet_OutMatchData;         // 0x38C(0xC)(NoDestructor)
	enum class EGetResult                        CallFunc_IsItemConstraintMet_OutBranch;            // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x492 (0x492 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintGroupStatisfied
struct UBPFL_Crafting_C_IsConstraintGroupStatisfied_Params
{
public:
	TArray<struct FCraftingConstraintSet>        ConstraintGroup;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInventoryEntry                       InputItem;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x308(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7911[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingConstraintSet                SatisfiedConstraintSet;                            // 0x310(0x58)(Parm, OutParm)
	bool                                         FoundMatchingSet;                                  // 0x368(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMatchFound;                                       // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7922[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingConstraintSet                CurrentMatch;                                      // 0x370(0x58)(Edit, BlueprintVisible)
	struct FCraftingConstraintSet                CurrentConstraintSet;                              // 0x3C8(0x58)(Edit, BlueprintVisible)
	bool                                         ConstraintGroupSatisfied;                          // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_792D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x42C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingConstraintSet                CallFunc_Array_Get_Item;                           // 0x430(0x58)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7941[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConstraintSetSatisfied_Success;         // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConstraintSetSatisfied_MatchesSet;      // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x381 (0x381 - 0x0)
// Function BPFL_Crafting.BPFL_Crafting_C.IsConstraintSetSatisfied
struct UBPFL_Crafting_C_IsConstraintSetSatisfied_Params
{
public:
	struct FCraftingConstraintSet                ConstraintSet;                                     // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                        Pad_79C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InputItem;                                         // 0x60(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x358(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MatchesSet;                                        // 0x359(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NonQuantitySatisfied;                              // 0x35A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuantitySatisfied;                                 // 0x35B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Traits;                                            // 0x360(0x20)(Edit, BlueprintVisible)
	bool                                         CallFunc_AreQuantityConstraintsSatisfied_ReturnValue; // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


