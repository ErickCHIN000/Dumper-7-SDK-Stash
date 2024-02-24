#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFC (0x570 - 0x474)
// BlueprintGeneratedClass GA_Crafting_Step_Activation_Base.GA_Crafting_Step_Activation_Base_C
class UGA_Crafting_Step_Activation_Base_C : public UGA_Crafting_Step_Base_C
{
public:
	uint8                                        Pad_62AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDynamicTypedStructs                  GeneratedStepData;                                 // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bCancelled;                                        // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAsyncActivation;                                  // 0x491(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          InitializationTimeout;                             // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    InitializedEventData;                              // 0x4A0(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Activation_Base_C* GetDefaultObj();

	void FireStepStartedDelegate(bool StepActivatedSuccessfully, class UBP_CraftingStationComponent_C* CraftingStationComponent, class UBP_CraftingComponent_C* CraftingComponent, class AController* CraftingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void OnPostActivation(bool* Success);
	void DoEndAbility(bool IsCancelled, bool CallFunc_Not_PreBool_ReturnValue);
	void OnAbilityEnd(bool CallFunc_Not_PreBool_ReturnValue);
	void OnActivation(bool* Success, int32 CraftIndex, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_SetCraftStatusByID_Success);
	void SetStepData(bool* Success, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_SetStepData_Success);
	void GenerateStepData(bool* Success, const struct FDynamicTypedStructs& K2Node_MakeStruct_DynamicTypedStructs);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void Activation();
	void PreActivation();
	void PostActivation();
	void Initialization();
	void Timeout();
	void ExecuteUbergraph_GA_Crafting_Step_Activation_Base(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_GenerateStepData_Success, bool CallFunc_SetStepData_Success, bool CallFunc_OnActivation_Success, bool CallFunc_OnPostActivation_Success, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_InitializeAbilityFromEvent_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, bool CallFunc_IsDrainingFuel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


