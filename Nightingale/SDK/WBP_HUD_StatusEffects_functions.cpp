#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C
// (None)

class UClass* UWBP_HUD_StatusEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_StatusEffects_C");

	return Clss;
}


// WBP_HUD_StatusEffects_C WBP_HUD_StatusEffects.Default__WBP_HUD_StatusEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_StatusEffects_C* UWBP_HUD_StatusEffects_C::GetDefaultObj()
{
	static class UWBP_HUD_StatusEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_StatusEffects_C*>(UWBP_HUD_StatusEffects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.Add Effect to Widget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle EffectHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UNWXGameplayEffectUIData*    UIData                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_StatusEffects_Effect_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::Add_Effect_to_Widget(const struct FActiveGameplayEffectHandle& EffectHandle, class UNWXGameplayEffectUIData* UIData, class UWBP_HUD_StatusEffects_Effect_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldShowEffect_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "Add Effect to Widget");

	Params::UWBP_HUD_StatusEffects_C_Add_Effect_to_Widget_Params Parms{};

	Parms.EffectHandle = EffectHandle;
	Parms.UIData = UIData;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_ShouldShowEffect_ReturnValue = CallFunc_ShouldShowEffect_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.ShouldShowEffect
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNWXGameplayEffectUIData*    UIData                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetEffectTags_ReturnValue                               (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_HUD_StatusEffects_C::ShouldShowEffect(class UNWXGameplayEffectUIData*& UIData, const struct FGameplayTagContainer& CallFunc_GetEffectTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "ShouldShowEffect");

	Params::UWBP_HUD_StatusEffects_C_ShouldShowEffect_Params Parms{};

	Parms.UIData = UIData;
	Parms.CallFunc_GetEffectTags_ReturnValue = CallFunc_GetEffectTags_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.OnGameplayEffectRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveGameplayHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffectUIData*       GameplayEffectUIData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_StatusEffects_Effect_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::OnGameplayEffectRemoved(struct FActiveGameplayEffectHandle& ActiveGameplayHandle, class UGameplayEffectUIData* GameplayEffectUIData, bool CallFunc_Map_Remove_ReturnValue, class UWBP_HUD_StatusEffects_Effect_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "OnGameplayEffectRemoved");

	Params::UWBP_HUD_StatusEffects_C_OnGameplayEffectRemoved_Params Parms{};

	Parms.ActiveGameplayHandle = ActiveGameplayHandle;
	Parms.GameplayEffectUIData = GameplayEffectUIData;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.OnGameplayEffectAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveGameplayHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffectUIData*       GameplayEffectUIData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameplayEffectUIData*    K2Node_DynamicCast_AsNWXGameplay_Effect_UIData                   (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::OnGameplayEffectAdded(struct FActiveGameplayEffectHandle& ActiveGameplayHandle, class UGameplayEffectUIData* GameplayEffectUIData, class UNWXGameplayEffectUIData* K2Node_DynamicCast_AsNWXGameplay_Effect_UIData, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "OnGameplayEffectAdded");

	Params::UWBP_HUD_StatusEffects_C_OnGameplayEffectAdded_Params Parms{};

	Parms.ActiveGameplayHandle = ActiveGameplayHandle;
	Parms.GameplayEffectUIData = GameplayEffectUIData;
	Parms.K2Node_DynamicCast_AsNWXGameplay_Effect_UIData = K2Node_DynamicCast_AsNWXGameplay_Effect_UIData;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.UnbindGameplayEffectEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayEffectUIObservable>CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameplayEffectUIObservable_IsValid                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::UnbindGameplayEffectEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable, bool CallFunc_GetGameplayEffectUIObservable_IsValid, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "UnbindGameplayEffectEvents");

	Params::UWBP_HUD_StatusEffects_C_UnbindGameplayEffectEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable = CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable;
	Parms.CallFunc_GetGameplayEffectUIObservable_IsValid = CallFunc_GetGameplayEffectUIObservable_IsValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.BindGameplayEffectEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayEffectUIObservable>CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameplayEffectUIObservable_IsValid                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::BindGameplayEffectEvents(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable, bool CallFunc_GetGameplayEffectUIObservable_IsValid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "BindGameplayEffectEvents");

	Params::UWBP_HUD_StatusEffects_C_BindGameplayEffectEvents_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable = CallFunc_GetGameplayEffectUIObservable_GameplayEffectUIObservable;
	Parms.CallFunc_GetGameplayEffectUIObservable_IsValid = CallFunc_GetGameplayEffectUIObservable_IsValid;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.GetGameplayEffectUIObservable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayEffectUIObservable>GameplayEffectUIObservable                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayEffectUIObservable>K2Node_DynamicCast_AsGameplay_Effect_UIObservable                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::GetGameplayEffectUIObservable(class APawn* Pawn, TScriptInterface<class IGameplayEffectUIObservable>* GameplayEffectUIObservable, bool* IsValid, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IGameplayEffectUIObservable> K2Node_DynamicCast_AsGameplay_Effect_UIObservable, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "GetGameplayEffectUIObservable");

	Params::UWBP_HUD_StatusEffects_C_GetGameplayEffectUIObservable_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Effect_UIObservable = K2Node_DynamicCast_AsGameplay_Effect_UIObservable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayEffectUIObservable != nullptr)
		*GameplayEffectUIObservable = Parms.GameplayEffectUIObservable;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.PopulateStatusEffects
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UNWXGameplayEffectUIData*>NewStatusEffectUIs                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FActiveGameplayEffectHandle>NewEffectHandles                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameplayEffectUIData*    CallFunc_Array_Get_Item                                          (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::PopulateStatusEffects(TArray<class UNWXGameplayEffectUIData*>& NewStatusEffectUIs, TArray<struct FActiveGameplayEffectHandle>& NewEffectHandles, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXGameplayEffectUIData* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "PopulateStatusEffects");

	Params::UWBP_HUD_StatusEffects_C_PopulateStatusEffects_Params Parms{};

	Parms.NewStatusEffectUIs = NewStatusEffectUIs;
	Parms.NewEffectHandles = NewEffectHandles;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.InitializeStatusEffects
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXGameplayEffectUIData*>CallFunc_GetActiveGameplayEffectUIs_GameplayEffectUIs            (ReferenceParm, ContainsInstancedReference)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_GetActiveGameplayEffectUIs_EffectHandles                (ReferenceParm)

void UWBP_HUD_StatusEffects_C::InitializeStatusEffects(class APawn* NewPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<class UNWXGameplayEffectUIData*>& CallFunc_GetActiveGameplayEffectUIs_GameplayEffectUIs, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveGameplayEffectUIs_EffectHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "InitializeStatusEffects");

	Params::UWBP_HUD_StatusEffects_C_InitializeStatusEffects_Params Parms{};

	Parms.NewPawn = NewPawn;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetActiveGameplayEffectUIs_GameplayEffectUIs = CallFunc_GetActiveGameplayEffectUIs_GameplayEffectUIs;
	Parms.CallFunc_GetActiveGameplayEffectUIs_EffectHandles = CallFunc_GetActiveGameplayEffectUIs_EffectHandles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::Initialize(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "Initialize");

	Params::UWBP_HUD_StatusEffects_C_Initialize_Params Parms{};

	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "OnPawnPossessedAndReady");

	Params::UWBP_HUD_StatusEffects_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_StatusEffects_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_StatusEffects.WBP_HUD_StatusEffects_C.ExecuteUbergraph_WBP_HUD_StatusEffects
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_StatusEffects_C::ExecuteUbergraph_WBP_HUD_StatusEffects(int32 EntryPoint, class APawn* K2Node_Event_NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_StatusEffects_C", "ExecuteUbergraph_WBP_HUD_StatusEffects");

	Params::UWBP_HUD_StatusEffects_C_ExecuteUbergraph_WBP_HUD_StatusEffects_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


