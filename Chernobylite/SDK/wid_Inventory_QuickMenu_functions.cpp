#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C
// (None)

class UClass* UWid_Inventory_QuickMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_QuickMenu_C");

	return Clss;
}


// wid_Inventory_QuickMenu_C wid_Inventory_QuickMenu.Default__wid_Inventory_QuickMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_QuickMenu_C* UWid_Inventory_QuickMenu_C::GetDefaultObj()
{
	static class UWid_Inventory_QuickMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_QuickMenu_C*>(UWid_Inventory_QuickMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.AnimatedShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::AnimatedShow(float StartTime, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "AnimatedShow");

	Params::UWid_Inventory_QuickMenu_C_AnimatedShow_Params Parms{};

	Parms.StartTime = StartTime;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.IsQuickUseScrollEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQuickUseScrollEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_Inventory_QuickMenu_C::IsQuickUseScrollEnabled(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetQuickUseScrollEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "IsQuickUseScrollEnabled");

	Params::UWid_Inventory_QuickMenu_C_IsQuickUseScrollEnabled_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetQuickUseScrollEnabled_ReturnValue = CallFunc_GetQuickUseScrollEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Global Visibility Changed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PreviousAlwaysVisible                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::Global_Visibility_Changed(bool PreviousAlwaysVisible, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Global Visibility Changed");

	Params::UWid_Inventory_QuickMenu_C_Global_Visibility_Changed_Params Parms{};

	Parms.PreviousAlwaysVisible = PreviousAlwaysVisible;
	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue = CallFunc_IsQuickUseScrollEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.IsDisabledDueToMovementState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSoftClassPtr<class ACGMovementState>CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWid_Inventory_QuickMenu_C::IsDisabledDueToMovementState(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, TSoftClassPtr<class ACGMovementState> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "IsDisabledDueToMovementState");

	Params::UWid_Inventory_QuickMenu_C_IsDisabledDueToMovementState_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.InstantForceHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::InstantForceHide(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "InstantForceHide");

	Params::UWid_Inventory_QuickMenu_C_InstantForceHide_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.StopAllAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::StopAllAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "StopAllAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.HideInfinite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::HideInfinite(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "HideInfinite");

	Params::UWid_Inventory_QuickMenu_C_HideInfinite_Params Parms{};

	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue = CallFunc_IsQuickUseScrollEnabled_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ShowInfinite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::ShowInfinite(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ShowInfinite");

	Params::UWid_Inventory_QuickMenu_C_ShowInfinite_Params Parms{};

	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.AnimatedHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::AnimatedHide(bool CallFunc_BooleanOR_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "AnimatedHide");

	Params::UWid_Inventory_QuickMenu_C_AnimatedHide_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Update buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Update_buttons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Update buttons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Fire_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::Fire_2(bool CallFunc_BooleanOR_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Fire_2");

	Params::UWid_Inventory_QuickMenu_C_Fire_2_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Fire_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::Fire_1(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Fire_1");

	Params::UWid_Inventory_QuickMenu_C_Fire_1_Params Parms{};

	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue = CallFunc_IsQuickUseScrollEnabled_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.SelectEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_Selected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Inventory_QuickMenu_Entry_C*Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::SelectEntry(bool New_Selected, class UWid_Inventory_QuickMenu_Entry_C* Target, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "SelectEntry");

	Params::UWid_Inventory_QuickMenu_C_SelectEntry_Params Parms{};

	Parms.New_Selected = New_Selected;
	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Fire_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::Fire_0(bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Fire_0");

	Params::UWid_Inventory_QuickMenu_C_Fire_0_Params Parms{};

	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue = CallFunc_IsQuickUseScrollEnabled_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.UpdateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateOnlyVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_ButtonIndicator_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_ButtonIndicator_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::UpdateButtons(bool UpdateOnlyVisibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UWid_ButtonIndicator_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWid_ButtonIndicator_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "UpdateButtons");

	Params::UWid_Inventory_QuickMenu_C_UpdateButtons_Params Parms{};

	Parms.UpdateOnlyVisibility = UpdateOnlyVisibility;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue = CallFunc_GetLastInputFromGamepadCPP_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickMenuSlot          Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::Set(class FName ItemId, enum class EQuickMenuSlot Slot, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_Set_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Set");

	Params::UWid_Inventory_QuickMenu_C_Set_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Slot = Slot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_Set_ReturnValue = CallFunc_Set_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.SetFocusedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentFocusedItemUID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InvEntry                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_Inventory_QuickMenu_C::SetFocusedItem(class FName ItemId, class FName CurrentFocusedItemUID, const struct FInventoryEntry& InvEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "SetFocusedItem");

	Params::UWid_Inventory_QuickMenu_C_SetFocusedItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CurrentFocusedItemUID = CurrentFocusedItemUID;
	Parms.InvEntry = InvEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Gamepad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::Select(bool Select, bool Gamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Select");

	Params::UWid_Inventory_QuickMenu_C_Select_Params Parms{};

	Parms.Select = Select;
	Parms.Gamepad = Gamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_ReturnValue_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::Update(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName CallFunc_Get_ReturnValue, class FName CallFunc_Get_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FName CallFunc_Get_ReturnValue_2, class FName CallFunc_Get_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class FName CallFunc_Get_ReturnValue_4, class FName CallFunc_Get_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class FName CallFunc_Get_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class FName CallFunc_Get_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Update");

	Params::UWid_Inventory_QuickMenu_C_Update_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_Get_ReturnValue_1 = CallFunc_Get_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Get_ReturnValue_2 = CallFunc_Get_ReturnValue_2;
	Parms.CallFunc_Get_ReturnValue_3 = CallFunc_Get_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_Get_ReturnValue_4 = CallFunc_Get_ReturnValue_4;
	Parms.CallFunc_Get_ReturnValue_5 = CallFunc_Get_ReturnValue_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_Get_ReturnValue_6 = CallFunc_Get_ReturnValue_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_Get_ReturnValue_7 = CallFunc_Get_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Disable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Enable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.DPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.DPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.DPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.DPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "SelectItem");

	Params::UWid_Inventory_QuickMenu_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Assign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Assign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Assign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ShowWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ShowWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.HideWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "HideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Tick");

	Params::UWid_Inventory_QuickMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUse8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ResetAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQuickMenuSlot          Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::ResetAll(enum class EQuickMenuSlot Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ResetAll");

	Params::UWid_Inventory_QuickMenu_C_ResetAll_Params Parms{};

	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QUse1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QUse2
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QUse3
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QUse4
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QInputAssign
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QInputAssign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QInputAssign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class ACGMovementState>InPreviousMovementState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>InNewMovementState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWid_Inventory_QuickMenu_C::CustomEvent_0(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "CustomEvent_0");

	Params::UWid_Inventory_QuickMenu_C_CustomEvent_0_Params Parms{};

	Parms.InPreviousMovementState = InPreviousMovementState;
	Parms.InNewMovementState = InNewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.RemoveDPADSelectionIfNotVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::RemoveDPADSelectionIfNotVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "RemoveDPADSelectionIfNotVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.BindVisibilityContainerCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::BindVisibilityContainerCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "BindVisibilityContainerCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.UnbindVisibilityContainerCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::UnbindVisibilityContainerCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "UnbindVisibilityContainerCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QInputEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QInputEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QInputEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.StartHideDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::StartHideDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "StartHideDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.StopHideDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::StopHideDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "StopHideDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.SetQuickMenuNotActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::SetQuickMenuNotActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "SetQuickMenuNotActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QEnableScroll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QEnableScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QEnableScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QuickUseScrollDelayFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QuickUseScrollDelayFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QuickUseScrollDelayFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.InitScrollOrder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::InitScrollOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "InitScrollOrder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.SetScrollToDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::SetScrollToDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "SetScrollToDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QScrollUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QScrollUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QScrollUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QScrollDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QScrollDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QScrollDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ScrollToNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::ScrollToNext(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ScrollToNext");

	Params::UWid_Inventory_QuickMenu_C_ScrollToNext_Params Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QAcceptScroll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QAcceptScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QAcceptScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QDeclineScroll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QDeclineScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QDeclineScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ForceFinishScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::ForceFinishScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ForceFinishScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.QDisableScroll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::QDisableScroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "QDisableScroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.ExecuteUbergraph_wid_Inventory_QuickMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Event_Idx                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_Inventory_QuickMenu_Entry_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWid_Inventory_QuickMenu_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_1_FirstRun                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_2_FirstRun                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQuickMenuSlot          K2Node_CustomEvent_Current                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Use_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisabledDueToMovementState_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>K2Node_CustomEvent_InPreviousMovementState                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>K2Node_CustomEvent_InNewMovementState                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsDisabledDueToMovementState_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDisabledDueToMovementState_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_3_FirstRun                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_Inventory_QuickMenu_Entry_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Forward                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Inventory_QuickMenu_Entry_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickMenuSlot          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Use_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EQuickMenuSlot>  K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_IsQuickUseScrollEnabled_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue_9                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Inventory_QuickMenu_C::ExecuteUbergraph_wid_Inventory_QuickMenu(int32 EntryPoint, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue_3, int32 Temp_int_Variable_2, bool CallFunc_NotEqual_NameName_ReturnValue_4, bool CallFunc_NotEqual_NameName_ReturnValue_5, bool Temp_bool_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class FName K2Node_Select_Default, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_NameName_ReturnValue_6, const struct FVector2D& K2Node_Event_Idx, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class UWid_Inventory_QuickMenu_Entry_C*>& K2Node_MakeArray_Array, class UWid_Inventory_QuickMenu_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_3, class FName K2Node_Select_Default_3, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool K2Node_MultiGate_1_FirstRun, bool K2Node_MultiGate_2_FirstRun, enum class EQuickMenuSlot K2Node_CustomEvent_Current, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Use_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName K2Node_Select_Default_5, bool CallFunc_IsDisabledDueToMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, bool CallFunc_IsDisabledDueToMovementState_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsDisabledDueToMovementState_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_6, bool CallFunc_NotEqual_NameName_ReturnValue_7, bool Temp_bool_Variable_7, class FName K2Node_Select_Default_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_NameName_ReturnValue_8, bool Temp_bool_Variable_8, class FName K2Node_Select_Default_7, bool CallFunc_BooleanOR_ReturnValue_4, int32 Temp_int_Variable_3, class FName K2Node_Select_Default_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, int32 Temp_int_Variable_4, bool Temp_bool_Variable_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 K2Node_Select_Default_9, bool K2Node_MultiGate_3_FirstRun, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, TArray<class UWid_Inventory_QuickMenu_Entry_C*>& K2Node_MakeArray_Array_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool K2Node_CustomEvent_Forward, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class UWid_Inventory_QuickMenu_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_5, enum class EQuickMenuSlot CallFunc_Array_Get_Item_2, bool CallFunc_Use_ReturnValue_1, TArray<enum class EQuickMenuSlot>& K2Node_MakeArray_Array_2, bool CallFunc_IsQuickUseScrollEnabled_ReturnValue_3, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_1, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_3, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_4, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_5, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_6, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_7, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_8, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "ExecuteUbergraph_wid_Inventory_QuickMenu");

	Params::UWid_Inventory_QuickMenu_C_ExecuteUbergraph_wid_Inventory_QuickMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue = CallFunc_GetLastInputFromGamepadCPP_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_3 = CallFunc_NotEqual_NameName_ReturnValue_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_4 = CallFunc_NotEqual_NameName_ReturnValue_4;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_5 = CallFunc_NotEqual_NameName_ReturnValue_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_6 = CallFunc_NotEqual_NameName_ReturnValue_6;
	Parms.K2Node_Event_Idx = K2Node_Event_Idx;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.K2Node_MultiGate_1_FirstRun = K2Node_MultiGate_1_FirstRun;
	Parms.K2Node_MultiGate_2_FirstRun = K2Node_MultiGate_2_FirstRun;
	Parms.K2Node_CustomEvent_Current = K2Node_CustomEvent_Current;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Use_ReturnValue = CallFunc_Use_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsDisabledDueToMovementState_ReturnValue = CallFunc_IsDisabledDueToMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.K2Node_CustomEvent_InPreviousMovementState = K2Node_CustomEvent_InPreviousMovementState;
	Parms.K2Node_CustomEvent_InNewMovementState = K2Node_CustomEvent_InNewMovementState;
	Parms.CallFunc_IsDisabledDueToMovementState_ReturnValue_1 = CallFunc_IsDisabledDueToMovementState_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_2 = CallFunc_GetRenderOpacity_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_3 = CallFunc_GetRenderOpacity_ReturnValue_3;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsDisabledDueToMovementState_ReturnValue_2 = CallFunc_IsDisabledDueToMovementState_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_7 = CallFunc_NotEqual_NameName_ReturnValue_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_8 = CallFunc_NotEqual_NameName_ReturnValue_8;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_MultiGate_3_FirstRun = K2Node_MultiGate_3_FirstRun;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue = CallFunc_IsQuickUseScrollEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue_1 = CallFunc_IsQuickUseScrollEnabled_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.K2Node_CustomEvent_Forward = K2Node_CustomEvent_Forward;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue_2 = CallFunc_IsQuickUseScrollEnabled_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Use_ReturnValue_1 = CallFunc_Use_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_IsQuickUseScrollEnabled_ReturnValue_3 = CallFunc_IsQuickUseScrollEnabled_ReturnValue_3;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_1 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_1;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_2 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_2;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_3 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_3;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_4 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_4;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_5 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_5;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_6 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_6;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_7 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_7;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_8 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_8;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue_9 = CallFunc_GetLastInputFromGamepadCPP_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.InventoryAssignmentBegan__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::InventoryAssignmentBegan__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "InventoryAssignmentBegan__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_QuickMenu.wid_Inventory_QuickMenu_C.GoBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_QuickMenu_C::GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_QuickMenu_C", "GoBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


