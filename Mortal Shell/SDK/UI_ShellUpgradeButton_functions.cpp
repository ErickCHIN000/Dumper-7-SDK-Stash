#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShellUpgradeButton.UI_ShellUpgradeButton_C
// (None)

class UClass* UUI_ShellUpgradeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShellUpgradeButton_C");

	return Clss;
}


// UI_ShellUpgradeButton_C UI_ShellUpgradeButton.Default__UI_ShellUpgradeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShellUpgradeButton_C* UUI_ShellUpgradeButton_C::GetDefaultObj()
{
	static class UUI_ShellUpgradeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShellUpgradeButton_C*>(UUI_ShellUpgradeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetObtainedBGSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetObtainedBGSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetObtainedBGSize");

	Params::UUI_ShellUpgradeButton_C_SetObtainedBGSize_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.ButtonDebugging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::ButtonDebugging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "ButtonDebugging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconArtColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::SetIconArtColor(float DeltaTime, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetIconArtColor");

	Params::UUI_ShellUpgradeButton_C_SetIconArtColor_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.CreateButtonMID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::CreateButtonMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "CreateButtonMID");

	Params::UUI_ShellUpgradeButton_C_CreateButtonMID_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetSelectionMat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetSelectionMat(bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetSelectionMat");

	Params::UUI_ShellUpgradeButton_C_SetSelectionMat_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetObtainedFillingSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetObtainedFillingSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetObtainedFillingSize");

	Params::UUI_ShellUpgradeButton_C_SetObtainedFillingSize_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetFillingSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetFillingSize(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetFillingSize");

	Params::UUI_ShellUpgradeButton_C_SetFillingSize_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetPreviewTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetPreviewTexture(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetPreviewTexture");

	Params::UUI_ShellUpgradeButton_C_SetPreviewTexture_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetObtained
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::SetObtained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetObtained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.GetUpgradeName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Upgrade                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::GetUpgradeName(class FName* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "GetUpgradeName");

	Params::UUI_ShellUpgradeButton_C_GetUpgradeName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = Parms.Upgrade;

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Tar                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Glimpses                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::GetCost(int32* Tar, int32* Glimpses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "GetCost");

	Params::UUI_ShellUpgradeButton_C_GetCost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tar != nullptr)
		*Tar = Parms.Tar;

	if (Glimpses != nullptr)
		*Glimpses = Parms.Glimpses;

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tar                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Glimpses                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::SetDetails(int32 Tar, int32 Glimpses, bool Locked, class FName Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetDetails");

	Params::UUI_ShellUpgradeButton_C_SetDetails_Params Parms{};

	Parms.Tar = Tar;
	Parms.Glimpses = Glimpses;
	Parms.Locked = Locked;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBuy                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Obtained                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShellNameKnown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeButton_C::UpdateState(bool CanBuy, bool Obtained, bool ShellNameKnown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "UpdateState");

	Params::UUI_ShellUpgradeButton_C_UpdateState_Params Parms{};

	Parms.CanBuy = CanBuy;
	Parms.Obtained = Obtained;
	Parms.ShellNameKnown = ShellNameKnown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayCantBuyAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::PlayCantBuyAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "PlayCantBuyAnim");

	Params::UUI_ShellUpgradeButton_C_PlayCantBuyAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayFilling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::PlayFilling(FDelegateProperty_ Event, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "PlayFilling");

	Params::UUI_ShellUpgradeButton_C_PlayFilling_Params Parms{};

	Parms.Event = Event;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.ResetFilling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::ResetFilling(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_PauseAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "ResetFilling");

	Params::UUI_ShellUpgradeButton_C_ResetFilling_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconArtRenderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShellKnown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Opacity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeButton_C::SetIconArtRenderOpacity(bool ShellKnown, float Local_Opacity, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetIconArtRenderOpacity");

	Params::UUI_ShellUpgradeButton_C_SetIconArtRenderOpacity_Params Parms{};

	Parms.ShellKnown = ShellKnown;
	Parms.Local_Opacity = Local_Opacity;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PlayBuyIconAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::PlayBuyIconAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "PlayBuyIconAnim");

	Params::UUI_ShellUpgradeButton_C_PlayBuyIconAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetSkillHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Highlight                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::SetSkillHighlighted(bool Highlight, bool Local_Highlight, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, float K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetSkillHighlighted");

	Params::UUI_ShellUpgradeButton_C_SetSkillHighlighted_Params Parms{};

	Parms.Highlight = Highlight;
	Parms.Local_Highlight = Local_Highlight;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.SetIconDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShellKnown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipOuterIconOpacity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipOuterIconOpacity                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ShellKnown                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUI_ShellUpgradeButton_C::SetIconDetails(class UTexture2D* Texture, bool ShellKnown, bool Unlocked, bool SkipOuterIconOpacity, bool Local_SkipOuterIconOpacity, bool Local_Unlocked, bool Local_ShellKnown, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "SetIconDetails");

	Params::UUI_ShellUpgradeButton_C_SetIconDetails_Params Parms{};

	Parms.Texture = Texture;
	Parms.ShellKnown = ShellKnown;
	Parms.Unlocked = Unlocked;
	Parms.SkipOuterIconOpacity = SkipOuterIconOpacity;
	Parms.Local_SkipOuterIconOpacity = Local_SkipOuterIconOpacity;
	Parms.Local_Unlocked = Local_Unlocked;
	Parms.Local_ShellKnown = Local_ShellKnown;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "PreConstruct");

	Params::UUI_ShellUpgradeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeButton_C::BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "BndEvt__Button_ShellUpgrade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "Tick");

	Params::UUI_ShellUpgradeButton_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.ExecuteUbergraph_UI_ShellUpgradeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeButton_C::ExecuteUbergraph_UI_ShellUpgradeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "ExecuteUbergraph_UI_ShellUpgradeButton");

	Params::UUI_ShellUpgradeButton_C_ExecuteUbergraph_UI_ShellUpgradeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::OnButtonReleased__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "OnButtonReleased__DelegateSignature");

	Params::UUI_ShellUpgradeButton_C_OnButtonReleased__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::OnButtonPressed__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "OnButtonPressed__DelegateSignature");

	Params::UUI_ShellUpgradeButton_C_OnButtonPressed__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeButton.UI_ShellUpgradeButton_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeButton_C::OnButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeButton_C", "OnButtonHovered__DelegateSignature");

	Params::UUI_ShellUpgradeButton_C_OnButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


