#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xA78 - 0xA28)
// BlueprintGeneratedClass BP_Structure_CraftingBench.BP_Structure_CraftingBench_C
class ABP_Structure_CraftingBench_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAVFXFocusComponent*                   AVFXFocus;                                         // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        BP_CraftingStationComponent;                       // 0xA38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIMenusComponent_C*                UIMenusComponent;                                  // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftingMenuOpenRequest;                           // 0xA48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNiagaraComponent*                     StartCraftingNiagaraComponent;                     // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CompleteCraftingNiagaraComponent;                  // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCraftingCompleted;                              // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCraftingPaused;                                 // 0xA69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CraftedItemNiagaraComponent;                       // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_CraftingBench_C* GetDefaultObj();

	TArray<struct FCraftingRecipeReference> GetCurrentCraftingRecipes(TArray<struct FCraftingRecipeReference>& CallFunc_GetCraftingRecipes_CurrentCraftingRecipes);
	void GetRelevantCraftingData(bool* Success, struct FS_Crafting_CraftInProgress* CraftingData, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue);
	void On_Possessed_Pawn_Changed(class APawn* OldPawn, class APawn* NewPawn);
	void On_Crafted_Item_Pickup(bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void On_Crafted_Item_Complete(bool CallFunc_IsServer_ReturnValue, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCurrentCraftData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCurrentCraftData_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void LoadDataFromTable(int32 FoundCraftInProgressIndex, bool FoundCraft, const class FString& NewLocalVar_0);
	void HandleAVFXFocusScoreUpdated(float FocusScore, float NormalizedFocusScore, class UScopedAkComponent* CurrentScopedAk, class UScopedAkComponent* StructureAk, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UScopedAkComponent*>& CallFunc_Map_Values_Values, class UScopedAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue);
	void Activate_Crafting_Audio(class UAkAudioEvent* Starting_Audio_Event, class UAkAudioEvent* Ending_Audio_Event, class UScopedAkComponent* CallFunc_GetStructureAkComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Deactivate_Crafting_VFX(class UNiagaraSystem* VFX, enum class EStructureCraftingNiagaraType Crafting_Event, class UNiagaraComponent* LNiagaraComponent, enum class EStructureCraftingNiagaraType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UNiagaraComponent* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue);
	void Activate_Crafting_VFX(class UNiagaraSystem* VFX, enum class EStructureCraftingNiagaraType Crafting_Event, class UNiagaraComponent* LNiagaraComponent, enum class EStructureCraftingNiagaraType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Destroy_Crafting_Niagara_Component(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Create_Crafting_Niagara_Components(const struct FVector& NewLocalVar, class UNiagaraSystem* VFX, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Activate_Complete_Crafting_Components();
	void Activate_Resume_Crafting_Components();
	void Activate_Pause_Crafting_Components();
	void Activate_Start_Crafting_Components();
	void Crafting_Data_Updated(enum class E_Crafting_Fabrication_Status Crafting_Status, int32 Claimed_Quantity, int32 Current_Quantity, int32 Requested_Quantity, const struct FS_Crafting_CraftInProgress& Player_Crafting_Data, bool CallFunc_GetRelevantCraftingData_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetRelevantCraftingData_CraftingData, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void OnCompletedState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_OnCompletedState_Success);
	void UpdateCraftingModifiers(class UEnvironmentalInfluenceDataCraftingModifiers* EnvironmentalInfluenceData, bool AddModifier);
	void UpdateGrowthTime(class UEnvironmentalInfluenceDataGrowthRate* EnvironmentalInfluenceData, bool AddModifier);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void UpdateRefinementModifier();
	void UpdateCraftingDisciplines(class UEnvironmentalInfluenceDataDisciplines* EnvironmentalInfluenceData, bool AddDisciplines);
	void Crafting_Updated_Event();
	void SSMReady(class AManagerBase* Manager, bool bIsReady);
	void PerformDirtyRealmReset();
	void ExecuteUbergraph_BP_Structure_CraftingBench(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UEnvironmentalInfluenceDataCraftingModifiers* K2Node_Event_EnvironmentalInfluenceData_2, bool K2Node_Event_AddModifier_1, class UEnvironmentalInfluenceDataGrowthRate* K2Node_Event_EnvironmentalInfluenceData_1, bool K2Node_Event_AddModifier, bool CallFunc_HasAuthority_ReturnValue_1, class UEnvironmentalInfluenceDataDisciplines* K2Node_Event_EnvironmentalInfluenceData, bool K2Node_Event_AddDisciplines, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TSubclassOf<class IInterface> Temp_class_Variable, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, TSubclassOf<class AManagerBase> Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void CraftingMenuOpenRequest__DelegateSignature();
};

}


