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

// 0x224 (0x224 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.HandleEndAbility
struct UGA_CraftingStation_Enter_C_HandleEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAutomatedTestsRunning_ReturnValue;     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4811[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x30(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE8(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4814[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromBool_ReturnValue;       // 0x130(0x20)(None)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x150(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.CreateStepAdvancePayload
struct UGA_CraftingStation_Enter_C_CreateStepAdvancePayload_Params
{
public:
	struct FDataTableRowHandle                   StepHandle;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    ReturnValue;                                       // 0x10(0xD0)(Parm, OutParm, ReturnParm)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue; // 0xE0(0x28)(None)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x108(0xD0)(None)
};

// 0x4AA (0x4AA - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.HandleStepEnding
struct UGA_CraftingStation_Enter_C_HandleStepEnding_Params
{
public:
	struct FS_Crafting_CraftInProgress           CraftInProgress;                                   // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_4867[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Success;                                           // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_486A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           CurrentRecipeSteps;                                // 0xE8(0x10)(Edit, BlueprintVisible)
	struct FCraftingRecipe                       CurrentRecipeDefinition;                           // 0xF8(0x120)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        CurrentStepIndex;                                  // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4870[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CurrentRecipeHandle;                               // 0x220(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4874[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x298(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    CallFunc_CreateStepAdvancePayload_ReturnValue;     // 0x2A8(0xD0)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_487A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_487E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x388(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.DoesCrafterHaveStationEffect
struct UGA_CraftingStation_Enter_C_DoesCrafterHaveStationEffect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x8(0x48)(None)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x60(0x20)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.CreateApplyStepEffectPayload
struct UGA_CraftingStation_Enter_C_CreateApplyStepEffectPayload_Params
{
public:
	struct FDataTableRowHandle                   StepHandle;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    ReturnValue;                                       // 0x10(0xD0)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue;              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MakeLiteralBool_ReturnValue_1;            // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue; // 0xE8(0x28)(None)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x110(0xD0)(None)
};

// 0x340 (0x340 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.CreateEndCraftItemPayload
struct UGA_CraftingStation_Enter_C_CreateEndCraftItemPayload_Params
{
public:
	struct FS_Crafting_CraftInProgress           CraftInProgress;                                   // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_48E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGrantUnclaimedOnly;                               // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    ReturnValue;                                       // 0xE8(0xD0)(Parm, OutParm, ReturnParm)
	struct FGameplayAbilityPayloadHandle         AbilityPayload;                                    // 0x1B8(0x20)(Edit, BlueprintVisible)
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromBool_ReturnValue;       // 0x1D8(0x20)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromBool_ReturnValue_1;     // 0x200(0x20)(None)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue; // 0x220(0x28)(None)
	struct FGameplayAbilityPayloadHandle         CallFunc_AppendPayloadHandle_ReturnValue;          // 0x248(0x20)(None)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x270(0xD0)(None)
};

// 0x5A2 (0x5A2 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.HandleStepInProgress
struct UGA_CraftingStation_Enter_C_HandleStepInProgress_Params
{
public:
	struct FS_Crafting_CraftInProgress           CraftInProgress;                                   // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_493A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Success;                                           // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_493D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentCraftedQuantity;                            // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentClaimedQuantity;                            // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_493F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicTypedStructs                  CurrentStepData;                                   // 0xF0(0x10)(Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>           CurrentRecipeSteps;                                // 0x100(0x10)(Edit, BlueprintVisible)
	struct FCraftingRecipe                       CurrentRecipeDefinition;                           // 0x110(0x120)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        CurrentStepIndex;                                  // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4944[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CurrentRecipeHandle;                               // 0x240(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         K2Node_MathExpression_ReturnValue;                 // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    CallFunc_CreateEndCraftItemPayload_ReturnValue;    // 0x2C0(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_494A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x398(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    CallFunc_CreateApplyStepEffectPayload_ReturnValue; // 0x3A8(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue_1;   // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x47D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_494E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_TryGetCraftingRecipe_CraftingRecipe;      // 0x480(0x120)(ContainsInstancedReference)
	enum class EGetResult                        CallFunc_TryGetCraftingRecipe_Branches;            // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B4 (0x1B4 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.HandleEndCraft
struct UGA_CraftingStation_Enter_C_HandleEndCraft_Params
{
public:
	struct FS_Crafting_CraftInProgress           CraftInProgress;                                   // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_496A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    CallFunc_CreateEndCraftItemPayload_ReturnValue;    // 0xE0(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.LeaveCraftingStation
struct UGA_CraftingStation_Enter_C_LeaveCraftingStation_Params
{
public:
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4981[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.HandleCraftInProgress
struct UGA_CraftingStation_Enter_C_HandleCraftInProgress_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4997[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CurrentCraftInProgress;                            // 0x10(0xD8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_499B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_HandleStepEnding_Success;                 // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleStepInProgress_Success;             // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCraftForID_Success;                    // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CallFunc_GetCraftForID_CraftInProgressData;        // 0x100(0xD8)(HasGetValueTypeHash)
	uint8                                        Pad_49A1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x271 (0x271 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.InitializeFromEvent
struct UGA_CraftingStation_Enter_C_InitializeFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Success;                                           // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingStationComponent_C*        OptionalCraftingStationComponent;                  // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AbilityPayloadHasSoftObjectPath_ReturnValue; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       CallFunc_GetSoftObjectPathFromAbilityPayload_ReturnValue; // 0xE8(0x20)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_49FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CallFunc_MakeCraftingRecipeReferenceFromSoftObjectPath_ReturnValue; // 0x110(0x70)(HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolFromAbilityPayload_ReturnValue;    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AbilityPayloadHasBool_ReturnValue;        // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingStationComponent_C*        K2Node_DynamicCast_AsBP_Crafting_Station_Component; // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXCharacter*                         K2Node_DynamicCast_AsNWXCharacter;                 // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface;   // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetOwnershipObject_ReturnValue;           // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x1EC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IOwnershipInterface>  K2Node_DynamicCast_AsOwnership_Interface;          // 0x200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetOwningPlayerPersistentID_ReturnValue;  // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info;      // 0x228(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersistentUniqueIdFromPawn_PersistentId; // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingStationComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x258(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.Cancelled_A0DFD6A14610A2F72F4E67BEBCD6CA1F
struct UGA_CraftingStation_Enter_C_Cancelled_A0DFD6A14610A2F72F4E67BEBCD6CA1F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.ValidData_A0DFD6A14610A2F72F4E67BEBCD6CA1F
struct UGA_CraftingStation_Enter_C_ValidData_A0DFD6A14610A2F72F4E67BEBCD6CA1F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      Data;                                              // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.K2_OnEndAbility
struct UGA_CraftingStation_Enter_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.K2_ActivateAbilityFromEvent
struct UGA_CraftingStation_Enter_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3B0 (0x3B0 - 0x0)
// Function GA_CraftingStation_Enter.GA_CraftingStation_Enter_C.ExecuteUbergraph_GA_CraftingStation_Enter
struct UGA_CraftingStation_Enter_C_ExecuteUbergraph_GA_CraftingStation_Enter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_Data_1;                         // 0x8(0x28)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_Data;                           // 0x40(0x28)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable;                              // 0x78(0x28)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0xB0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_NWXWaitTargetData*        CallFunc_NWXWaitTargetData_ReturnValue;            // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayAbilityTargetActor*           CallFunc_BeginSpawningActor_SpawnedActor;          // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B11[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0xF0(0xD0)(ConstParm)
	bool                                         CallFunc_InitializeFromEvent_Success;              // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B15[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue; // 0x1D0(0xA0)(ContainsInstancedReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x270(0x10)(ReferenceParm)
	bool                                         CallFunc_HandleCraftInProgress_Success;            // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B1C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CallFunc_GetComponentByClass_ReturnValue;          // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CraftingComponent_C*               CallFunc_GetComponentByClass_ReturnValue_1;        // 0x2A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesCrafterHaveStationEffect_ReturnValue; // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B29[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x2B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_MakeEffectContext_ReturnValue;            // 0x2B8(0x18)(None)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x2D0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x300(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller;         // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x330(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CraftingCreation_Screen_C*        CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x353(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     Temp_struct_Variable_1;                            // 0x358(0x48)(ConstParm)
	struct FGuid                                 CallFunc_GetActiveCraftingSessionId_SessionId;     // 0x3A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


