#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C
// (None)

class UClass* UWid_MainMenu_Buttons_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Buttons_Entry_C");

	return Clss;
}


// wid_MainMenu_Buttons_Entry_C wid_MainMenu_Buttons_Entry.Default__wid_MainMenu_Buttons_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Buttons_Entry_C* UWid_MainMenu_Buttons_Entry_C::GetDefaultObj()
{
	static class UWid_MainMenu_Buttons_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Buttons_Entry_C*>(UWid_MainMenu_Buttons_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.StopHighlightAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayingForward                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_Entry_C::StopHighlightAnim(float NewLocalVar_1, bool PlayingForward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "StopHighlightAnim");

	Params::UWid_MainMenu_Buttons_Entry_C_StopHighlightAnim_Params Parms{};

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.PlayingForward = PlayingForward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimHighlight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               InfiniteHighlight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Buttons_Entry_C::PlayFadeOut(enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool AnimHighlight, bool InfiniteHighlight, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "PlayFadeOut");

	Params::UWid_MainMenu_Buttons_Entry_C_PlayFadeOut_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.AnimHighlight = AnimHighlight;
	Parms.InfiniteHighlight = InfiniteHighlight;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.ForcePlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Buttons_Entry_C::ForcePlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "ForcePlayClickEffect");

	Params::UWid_MainMenu_Buttons_Entry_C_ForcePlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.IsUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUsable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMainMenuButtonOwnerInterface_C>K2Node_DynamicCast_AsMain_Menu_Button_Owner_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyPopupVisible_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_Entry_C::IsUsable(bool* IsUsable, TScriptInterface<class IMainMenuButtonOwnerInterface_C> K2Node_DynamicCast_AsMain_Menu_Button_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnyPopupVisible_Result, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "IsUsable");

	Params::UWid_MainMenu_Buttons_Entry_C_IsUsable_Params Parms{};

	Parms.K2Node_DynamicCast_AsMain_Menu_Button_Owner_Interface = K2Node_DynamicCast_AsMain_Menu_Button_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnyPopupVisible_Result = CallFunc_IsAnyPopupVisible_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUsable != nullptr)
		*IsUsable = Parms.IsUsable;

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.PlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Buttons_Entry_C::PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "PlayClickEffect");

	Params::UWid_MainMenu_Buttons_Entry_C_PlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_MainMenu_Buttons_Entry_C::UpdateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "UpdateText");

	Params::UWid_MainMenu_Buttons_Entry_C_UpdateText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.UpdateActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ButtonActivate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_Entry_C::UpdateActivate(bool ButtonActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "UpdateActivate");

	Params::UWid_MainMenu_Buttons_Entry_C_UpdateActivate_Params Parms{};

	Parms.ButtonActivate = ButtonActivate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "PreConstruct");

	Params::UWid_MainMenu_Buttons_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Buttons_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "Tick");

	Params::UWid_MainMenu_Buttons_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.TriggeredByKeyboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::TriggeredByKeyboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "TriggeredByKeyboard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.UpdatePadding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::UpdatePadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "UpdatePadding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.UpdateWidth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::UpdateWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "UpdateWidth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.DeseletForce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::DeseletForce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "DeseletForce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.ExecuteUbergraph_wid_MainMenu_Buttons_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                CallFunc_GetKeyForAction_Keys                                    (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// bool                               CallFunc_IsUsable_IsUsable                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_Entry_C::ExecuteUbergraph_wid_MainMenu_Buttons_Entry(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FKey>& CallFunc_GetKeyForAction_Keys, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& CallFunc_Array_Get_Item_1, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_LastInputWasFromGamepad_Gamepad, enum class Enum_Buttons_PC K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 Temp_int_Variable_1, class FText CallFunc_TextToUpper_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Add_FloatFloat_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsUsable_IsUsable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "ExecuteUbergraph_wid_MainMenu_Buttons_Entry");

	Params::UWid_MainMenu_Buttons_Entry_C_ExecuteUbergraph_wid_MainMenu_Buttons_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetKeyForAction_Keys = CallFunc_GetKeyForAction_Keys;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue = CallFunc_MapKeyNameToEnum_EnumValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_IsUsable_IsUsable = CallFunc_IsUsable_IsUsable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons_Entry.wid_MainMenu_Buttons_Entry_C.BtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_Entry_C::BtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_Entry_C", "BtnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


