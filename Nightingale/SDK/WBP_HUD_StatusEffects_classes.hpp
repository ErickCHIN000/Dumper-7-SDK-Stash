#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x3C1 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C
class UWBP_HUD_StatusEffects_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        Box;                                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                 EffectTagsToIgnore;                                // 0x350(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FActiveGameplayEffectHandle, class UWBP_HUD_StatusEffects_Effect_C*> EffectHandleToChildWidget;                         // 0x370(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         HasDisplayedStaminaNotification;                   // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_StatusEffects_C* GetDefaultObj();

	void Add_Effect_to_Widget(const struct FActiveGameplayEffectHandle& EffectHandle, class UNWXGameplayEffectUIData* UIData, class UWBP_HUD_StatusEffects_Effect_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldShowEffect_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	bool ShouldShowEffect(class UNWXGameplayEffectUIData*& UIData, const struct FGameplayTagContainer& CallFunc_GetEffectTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnGameplayEffectRemoved(struct FActiveGameplayEffectHandle& ActiveGameplayHandle, class UGameplayEffectUIData* GameplayEffectUIData, bool CallFunc_Map_Remove_ReturnValue, class UWBP_HUD_StatusEffects_Effect_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void OnGameplayEffectAdded(struct FActiveGameplayEffectHandle& ActiveGameplayHandle, class UGameplayEffectUIData* GameplayEffectUIData, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess);
	void UnbindGameplayEffectEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable, bool CallFunc_GetGameplayEffectUIObservable_IsValid, bool CallFunc_IsValid_ReturnValue);
	void BindGameplayEffectEvents(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable, bool CallFunc_GetGameplayEffectUIObservable_IsValid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void GetGameplayEffectUIObservable(class APawn* Pawn, TScriptInterface<class IGameplayEffectUIObservable>* GameplayEffectUIObservable, bool* IsValid, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> K2Node_DynamicCast_AsGameplay_Effect_UIObservable, bool K2Node_DynamicCast_bSuccess);
	void PopulateStatusEffects(TArray<class UNWXGameplayEffectUIData*>& NewStatusEffectUIs, TArray<struct FActiveGameplayEffectHandle>& NewEffectHandles, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXGameplayEffectUIData* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitializeStatusEffects(class APawn* NewPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<class UNWXGameplayEffectUIData*>& CallFunc_GetActiveGameplayEffectUIs_GameplayEffectUIs, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveGameplayEffectUIs_EffectHandles);
	void Initialize(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_StatusEffects(int32 EntryPoint, class APawn* K2Node_Event_NewPawn);
};

}


