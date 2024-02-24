#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Ingame.BP_Ingame_C
// (None)

class UClass* UBP_Ingame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ingame_C");

	return Clss;
}


// BP_Ingame_C BP_Ingame.Default__BP_Ingame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Ingame_C* UBP_Ingame_C::GetDefaultObj()
{
	static class UBP_Ingame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Ingame_C*>(UBP_Ingame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ingame.BP_Ingame_C.FishingBarText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::FishingBarText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "FishingBarText");

	Params::UBP_Ingame_C_FishingBarText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.Hotbar8Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::Hotbar8Text(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Hotbar8Text");

	Params::UBP_Ingame_C_Hotbar8Text_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.Hotbar7Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::Hotbar7Text(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Hotbar7Text");

	Params::UBP_Ingame_C_Hotbar7Text_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.Hotbar6Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::Hotbar6Text(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Hotbar6Text");

	Params::UBP_Ingame_C_Hotbar6Text_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GrenadeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::GrenadeText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GrenadeText");

	Params::UBP_Ingame_C_GrenadeText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.MeleeBarText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::MeleeBarText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "MeleeBarText");

	Params::UBP_Ingame_C_MeleeBarText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.SidearmBarText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::SidearmBarText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "SidearmBarText");

	Params::UBP_Ingame_C_SidearmBarText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.SecondayBarText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::SecondayBarText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "SecondayBarText");

	Params::UBP_Ingame_C_SecondayBarText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.PrimaryBarText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)

class FText UBP_Ingame_C::PrimaryBarText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "PrimaryBarText");

	Params::UBP_Ingame_C_PrimaryBarText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.MedicalUIAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MedicalEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::MedicalUIAnimation(class FName MedicalEffect, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "MedicalUIAnimation");

	Params::UBP_Ingame_C_MedicalUIAnimation_Params Parms{};

	Parms.MedicalEffect = MedicalEffect;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.CreateMedicalUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MedicalEffect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Adding_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMedicalUI_Bleed_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMedicalUI_HeavyBleed_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMedicalUI_BrokenBone_C*     CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMedicalUI_Radiation_C*      CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Ingame_C::CreateMedicalUI(class FName MedicalEffect, bool Adding_, class UMedicalUI_Bleed_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class UMedicalUI_HeavyBleed_C* CallFunc_Create_ReturnValue_1, class UMedicalUI_BrokenBone_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMedicalUI_Radiation_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "CreateMedicalUI");

	Params::UBP_Ingame_C_CreateMedicalUI_Params Parms{};

	Parms.MedicalEffect = MedicalEffect;
	Parms.Adding_ = Adding_;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.Hitmarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::Hitmarker(const struct FLinearColor& InColorAndOpacity, bool CallFunc_GetBoolCVar_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Hitmarker");

	Params::UBP_Ingame_C_Hitmarker_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.GetActionbarUIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      UIDs                                                             (Parm, OutParm)
// int32                              Consumable3                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Consumable2                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Consumable1                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found__2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::GetActionbarUIDs(TArray<int32>* UIDs, int32 Consumable3, int32 Consumable2, int32 Consumable1, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, bool CallFunc_GetEquippedItemRef_Found__1, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_1, int32 CallFunc_GetUniqueID_UniqueServerID, int32 CallFunc_GetUniqueID_UniqueServerID_1, bool CallFunc_GetEquippedItemRef_Found__2, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef_2, int32 CallFunc_GetUniqueID_UniqueServerID_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetActionbarUIDs");

	Params::UBP_Ingame_C_GetActionbarUIDs_Params Parms{};

	Parms.Consumable3 = Consumable3;
	Parms.Consumable2 = Consumable2;
	Parms.Consumable1 = Consumable1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetEquippedItemRef_Found__1 = CallFunc_GetEquippedItemRef_Found__1;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_1 = CallFunc_GetEquippedItemRef_ItemRef_1;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.CallFunc_GetUniqueID_UniqueServerID_1 = CallFunc_GetUniqueID_UniqueServerID_1;
	Parms.CallFunc_GetEquippedItemRef_Found__2 = CallFunc_GetEquippedItemRef_Found__2;
	Parms.CallFunc_GetEquippedItemRef_ItemRef_2 = CallFunc_GetEquippedItemRef_ItemRef_2;
	Parms.CallFunc_GetUniqueID_UniqueServerID_2 = CallFunc_GetUniqueID_UniqueServerID_2;

	UObject::ProcessEvent(Func, &Parms);

	if (UIDs != nullptr)
		*UIDs = std::move(Parms.UIDs);

}


// Function BP_Ingame.BP_Ingame_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_Ingame_C::GetPercent(double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetPercent");

	Params::UBP_Ingame_C_GetPercent_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetPercentText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText UBP_Ingame_C::GetPercentText(double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetPercentText");

	Params::UBP_Ingame_C_GetPercentText_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetBufferBarPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_Ingame_C::GetBufferBarPercent(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, bool CallFunc_IsValid_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetBufferBarPercent");

	Params::UBP_Ingame_C_GetBufferBarPercent_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetCurrentPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_Ingame_C::GetCurrentPercent(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, bool CallFunc_IsValid_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetCurrentPercent");

	Params::UBP_Ingame_C_GetCurrentPercent_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.AddScreenMarker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MarkerData               Marker_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlayerMarker_C*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_PlayerMarker_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UW_PlayerMarker_C* UBP_Ingame_C::AddScreenMarker(const struct FS_MarkerData& Marker_Data, class AActor* Target_Actor, int32 Index, class UW_PlayerMarker_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "AddScreenMarker");

	Params::UBP_Ingame_C_AddScreenMarker_Params Parms{};

	Parms.Marker_Data = Marker_Data;
	Parms.Target_Actor = Target_Actor;
	Parms.Index = Index;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetMaxXPText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UBP_Ingame_C::GetMaxXPText(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetMaxXPText");

	Params::UBP_Ingame_C_GetMaxXPText_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetCurrentXPText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UBP_Ingame_C::GetCurrentXPText(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetCurrentXPText");

	Params::UBP_Ingame_C_GetCurrentXPText_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.GetLevelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBP_Ingame_C::GetLevelText(class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetLevelText");

	Params::UBP_Ingame_C_GetLevelText_Params Parms{};

	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Ingame.BP_Ingame_C.FindAndUnbindCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UJSI_Slot_C*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::FindAndUnbindCapacity(class UJSI_Slot_C* ItemRef, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UJSI_Slot_C*>& CallFunc_Map_Keys_Keys, class UJSI_Slot_C* CallFunc_Array_Get_Item, TArray<class UJSI_Slot_C*>& CallFunc_Map_Values_Values, class UJSI_Slot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UJSI_Slot_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "FindAndUnbindCapacity");

	Params::UBP_Ingame_C_FindAndUnbindCapacity_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.GetHotbarByIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 ItemRef                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Found_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ContainerREF                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 MainItem                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 TheMainItem                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::GetHotbarByIndex(int32 Index, class UJSI_Slot_C** ItemRef, bool* Found_, class UJSIContainer_C** ContainerREF, class UJSI_Slot_C** MainItem, class UJSI_Slot_C* TheMainItem, class UJSI_Slot_C* EquippedItem, int32 Temp_int_Array_Index_Variable, TArray<class UJSI_Slot_C*>& CallFunc_Map_Keys_Keys, class UJSI_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UJSI_Slot_C*>& CallFunc_Map_Values_Values, class UJSI_Slot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array, class UJSIContainer_C* CallFunc_Array_Get_Item_2, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "GetHotbarByIndex");

	Params::UBP_Ingame_C_GetHotbarByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.TheMainItem = TheMainItem;
	Parms.EquippedItem = EquippedItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRef != nullptr)
		*ItemRef = Parms.ItemRef;

	if (Found_ != nullptr)
		*Found_ = Parms.Found_;

	if (ContainerREF != nullptr)
		*ContainerREF = Parms.ContainerREF;

	if (MainItem != nullptr)
		*MainItem = Parms.MainItem;

}


// Function BP_Ingame.BP_Ingame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.Crosshairs_Scale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::Crosshairs_Scale(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Crosshairs_Scale");

	Params::UBP_Ingame_C_Crosshairs_Scale_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.AllCrosshairsVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::AllCrosshairsVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "AllCrosshairsVisibility");

	Params::UBP_Ingame_C_AllCrosshairsVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.OxygenVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::OxygenVisibility(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "OxygenVisibility");

	Params::UBP_Ingame_C_OxygenVisibility_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateOxygen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Oxygen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateOxygen(double Oxygen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateOxygen");

	Params::UBP_Ingame_C_UpdateOxygen_Params Parms{};

	Parms.Oxygen = Oxygen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.StatsVisibilty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::StatsVisibilty(bool Hide_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "StatsVisibilty");

	Params::UBP_Ingame_C_StatsVisibilty_Params Parms{};

	Parms.Hide_ = Hide_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.ChangeFiringMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Auto_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::ChangeFiringMode(bool Auto_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "ChangeFiringMode");

	Params::UBP_Ingame_C_ChangeFiringMode_Params Parms{};

	Parms.Auto_ = Auto_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateFirearmName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Ingame_C::UpdateFirearmName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateFirearmName");

	Params::UBP_Ingame_C_UpdateFirearmName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.SetCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::SetCrosshair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "SetCrosshair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.UpdateRadiation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Radiation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateRadiation(double Radiation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateRadiation");

	Params::UBP_Ingame_C_UpdateRadiation_Params Parms{};

	Parms.Radiation = Radiation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateThirst
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Thirst                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateThirst(double Thirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateThirst");

	Params::UBP_Ingame_C_UpdateThirst_Params Parms{};

	Parms.Thirst = Thirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateHunger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Hunger                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateHunger(double Hunger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateHunger");

	Params::UBP_Ingame_C_UpdateHunger_Params Parms{};

	Parms.Hunger = Hunger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateHealth(double Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateHealth");

	Params::UBP_Ingame_C_UpdateHealth_Params Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.UpdateStamina
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Stamina                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateStamina(double Stamina)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateStamina");

	Params::UBP_Ingame_C_UpdateStamina_Params Parms{};

	Parms.Stamina = Stamina;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.SetInteractCrosshairType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::SetInteractCrosshairType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "SetInteractCrosshairType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.SetCombatCrosshairType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::SetCombatCrosshairType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "SetCombatCrosshairType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.OnCapacityUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotMother                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::OnCapacityUpdated_Event_0(int32 Current, int32 Max, class UJSIContainer_C* Container, class UJSI_Slot_C* SlotMother)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "OnCapacityUpdated_Event_0");

	Params::UBP_Ingame_C_OnCapacityUpdated_Event_0_Params Parms{};

	Parms.Current = Current;
	Parms.Max = Max;
	Parms.Container = Container;
	Parms.SlotMother = SlotMother;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.ClearContainers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::ClearContainers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "ClearContainers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.EventOnMouseBtnDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_Ingame_C::EventOnMouseBtnDown(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "EventOnMouseBtnDown");

	Params::UBP_Ingame_C_EventOnMouseBtnDown_Params Parms{};

	Parms.Container = Container;
	Parms.SlotRef = SlotRef;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.OnItemRemoved_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::OnItemRemoved_Event_0(class UJSI_Slot_C* ItemRef, class UJSIContainer_C* FromContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "OnItemRemoved_Event_0");

	Params::UBP_Ingame_C_OnItemRemoved_Event_0_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.FromContainer = FromContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.EventOnSomethingDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 DroppedSlotRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotReceiverRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ToSlotIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rotated_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::EventOnSomethingDropped(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* DroppedSlotRef, class UJSI_Slot_C* SlotReceiverRef, int32 ToSlotIndex, bool Rotated_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "EventOnSomethingDropped");

	Params::UBP_Ingame_C_EventOnSomethingDropped_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.ToContainer = ToContainer;
	Parms.DroppedSlotRef = DroppedSlotRef;
	Parms.SlotReceiverRef = SlotReceiverRef;
	Parms.ToSlotIndex = ToSlotIndex;
	Parms.Rotated_ = Rotated_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Name");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.UpdateAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::UpdateAmmo(int32 Current, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "UpdateAmmo");

	Params::UBP_Ingame_C_UpdateAmmo_Params Parms{};

	Parms.Current = Current;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Ingame.BP_Ingame_C.CrosshairShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::CrosshairShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "CrosshairShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.Event_HideStopFiringCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::Event_HideStopFiringCrosshair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Event_HideStopFiringCrosshair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.Event_StopFiringCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Ingame_C::Event_StopFiringCrosshair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "Event_StopFiringCrosshair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ingame.BP_Ingame_C.ExecuteUbergraph_BP_Ingame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show_                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Oxygen                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_CustomEvent_Hide_                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Auto_                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipItem_Unequipped                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_UnequipItem_SlotRef                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedItemRef_Found_                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_GetEquippedItemRef_ItemRef                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Radiation                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// double                             K2Node_CustomEvent_Thirst                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// double                             K2Node_CustomEvent_Hunger                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// double                             K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_4                         (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// double                             K2Node_CustomEvent_Stamina                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_5                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Current_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Max_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_Container_1                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotMother                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array_8                                         (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             K2Node_CustomEvent_Container                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotRef                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Button                                        (HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipItem_Unequipped_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_UnequipItem_SlotRef_1                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipItem_Unequipped_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_UnequipItem_SlotRef_2                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_ItemRef                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_FromContainer_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_FromContainer                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_ToContainer                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_DroppedSlotRef                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotReceiverRef                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToSlotIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Rotated_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_Cap_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetContainerCapacity_MaxCapacity_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// bool                               CallFunc_ISCapacityContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_9                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)
// int32                              CallFunc_GetUniqueID_UniqueServerID_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_DataTableType         CallFunc_GetDT_DataTableRef                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetItemID_ItemID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItem_Equipped                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_EquipItem_SlotItemRef                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_GetRootContainerRef_ContainerRef                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMainCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_UpdateCount_Count                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetUniqueID_UniqueID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Current                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Max                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue                (None)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_GetPlayerActionMappingStatic_ReturnValue_1              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Ingame_C::ExecuteUbergraph_BP_Ingame(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_CustomEvent_NewValue, int32 Temp_int_Array_Index_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_Show_, double K2Node_CustomEvent_Oxygen, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Hide_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Auto_, bool CallFunc_GetBoolCVar_ReturnValue, class FText K2Node_CustomEvent_Text, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array_1, class UJSIContainer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_UnequipItem_Unequipped, class UJSI_Slot_C* CallFunc_UnequipItem_SlotRef, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetEquippedItemRef_Found_, class UJSI_Slot_C* CallFunc_GetEquippedItemRef_ItemRef, int32 CallFunc_GetUniqueID_UniqueServerID, double K2Node_CustomEvent_Radiation, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, double K2Node_CustomEvent_Thirst, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, double K2Node_CustomEvent_Hunger, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_3, double K2Node_CustomEvent_Health, class FText CallFunc_Conv_DoubleToText_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, double K2Node_CustomEvent_Stamina, class FText CallFunc_Format_ReturnValue_4, class FText CallFunc_Conv_DoubleToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, double CallFunc_Divide_DoubleDouble_ReturnValue_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, int32 K2Node_CustomEvent_Current_1, int32 K2Node_CustomEvent_Max_1, class UJSIContainer_C* K2Node_CustomEvent_Container_1, class UJSI_Slot_C* K2Node_CustomEvent_SlotMother, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_GetContainerCapacity_Cap, int32 CallFunc_GetContainerCapacity_MaxCapacity, class UJSI_Slot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_6, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array_8, class UJSIContainer_C* K2Node_CustomEvent_Container, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef, const struct FKey& K2Node_CustomEvent_Button, class UJSIContainer_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_UnequipItem_Unequipped_1, class UJSI_Slot_C* CallFunc_UnequipItem_SlotRef_1, bool CallFunc_UnequipItem_Unequipped_2, class UJSI_Slot_C* CallFunc_UnequipItem_SlotRef_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UJSI_Slot_C* K2Node_CustomEvent_ItemRef, class UJSIContainer_C* K2Node_CustomEvent_FromContainer_1, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_GetUniqueID_UniqueServerID_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UJSIContainer_C* K2Node_CustomEvent_FromContainer, class UJSIContainer_C* K2Node_CustomEvent_ToContainer, class UJSI_Slot_C* K2Node_CustomEvent_DroppedSlotRef, class UJSI_Slot_C* K2Node_CustomEvent_SlotReceiverRef, int32 K2Node_CustomEvent_ToSlotIndex, bool K2Node_CustomEvent_Rotated_, int32 CallFunc_GetContainerCapacity_Cap_1, int32 CallFunc_GetContainerCapacity_MaxCapacity_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, bool CallFunc_ISCapacityContainer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_9, class FText CallFunc_Format_ReturnValue_7, int32 CallFunc_GetUniqueID_UniqueServerID_2, enum class E_DataTableType CallFunc_GetDT_DataTableRef, class FName CallFunc_GetItemID_ItemID, bool CallFunc_EquipItem_Equipped, class UJSI_Slot_C* CallFunc_EquipItem_SlotItemRef, class UJSIContainer_C* CallFunc_GetRootContainerRef_ContainerRef, bool CallFunc_IsMainCharacter_ReturnValue, int32 CallFunc_UpdateCount_Count, int32 CallFunc_SetUniqueID_UniqueID, int32 K2Node_CustomEvent_Current, int32 K2Node_CustomEvent_Max, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FInputActionKeyMapping& CallFunc_GetPlayerActionMappingStatic_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Key_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ingame_C", "ExecuteUbergraph_BP_Ingame");

	Params::UBP_Ingame_C_ExecuteUbergraph_BP_Ingame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_Show_ = K2Node_CustomEvent_Show_;
	Parms.K2Node_CustomEvent_Oxygen = K2Node_CustomEvent_Oxygen;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_Hide_ = K2Node_CustomEvent_Hide_;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Auto_ = K2Node_CustomEvent_Auto_;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_UnequipItem_Unequipped = CallFunc_UnequipItem_Unequipped;
	Parms.CallFunc_UnequipItem_SlotRef = CallFunc_UnequipItem_SlotRef;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedItemRef_Found_ = CallFunc_GetEquippedItemRef_Found_;
	Parms.CallFunc_GetEquippedItemRef_ItemRef = CallFunc_GetEquippedItemRef_ItemRef;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.K2Node_CustomEvent_Radiation = K2Node_CustomEvent_Radiation;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CustomEvent_Thirst = K2Node_CustomEvent_Thirst;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_2 = CallFunc_Conv_DoubleToText_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_CustomEvent_Hunger = K2Node_CustomEvent_Hunger;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_3 = CallFunc_Conv_DoubleToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_4 = CallFunc_Conv_DoubleToText_ReturnValue_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_CustomEvent_Stamina = K2Node_CustomEvent_Stamina;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_5 = CallFunc_Conv_DoubleToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_5 = CallFunc_Divide_DoubleDouble_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.K2Node_CustomEvent_Current_1 = K2Node_CustomEvent_Current_1;
	Parms.K2Node_CustomEvent_Max_1 = K2Node_CustomEvent_Max_1;
	Parms.K2Node_CustomEvent_Container_1 = K2Node_CustomEvent_Container_1;
	Parms.K2Node_CustomEvent_SlotMother = K2Node_CustomEvent_SlotMother;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetContainerCapacity_Cap = CallFunc_GetContainerCapacity_Cap;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity = CallFunc_GetContainerCapacity_MaxCapacity;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_CustomEvent_Container = K2Node_CustomEvent_Container;
	Parms.K2Node_CustomEvent_SlotRef = K2Node_CustomEvent_SlotRef;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_UnequipItem_Unequipped_1 = CallFunc_UnequipItem_Unequipped_1;
	Parms.CallFunc_UnequipItem_SlotRef_1 = CallFunc_UnequipItem_SlotRef_1;
	Parms.CallFunc_UnequipItem_Unequipped_2 = CallFunc_UnequipItem_Unequipped_2;
	Parms.CallFunc_UnequipItem_SlotRef_2 = CallFunc_UnequipItem_SlotRef_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CustomEvent_ItemRef = K2Node_CustomEvent_ItemRef;
	Parms.K2Node_CustomEvent_FromContainer_1 = K2Node_CustomEvent_FromContainer_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetUniqueID_UniqueServerID_1 = CallFunc_GetUniqueID_UniqueServerID_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_FromContainer = K2Node_CustomEvent_FromContainer;
	Parms.K2Node_CustomEvent_ToContainer = K2Node_CustomEvent_ToContainer;
	Parms.K2Node_CustomEvent_DroppedSlotRef = K2Node_CustomEvent_DroppedSlotRef;
	Parms.K2Node_CustomEvent_SlotReceiverRef = K2Node_CustomEvent_SlotReceiverRef;
	Parms.K2Node_CustomEvent_ToSlotIndex = K2Node_CustomEvent_ToSlotIndex;
	Parms.K2Node_CustomEvent_Rotated_ = K2Node_CustomEvent_Rotated_;
	Parms.CallFunc_GetContainerCapacity_Cap_1 = CallFunc_GetContainerCapacity_Cap_1;
	Parms.CallFunc_GetContainerCapacity_MaxCapacity_1 = CallFunc_GetContainerCapacity_MaxCapacity_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_3 = CallFunc_Conv_IntToInt64_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.CallFunc_ISCapacityContainer_ReturnValue = CallFunc_ISCapacityContainer_ReturnValue;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;
	Parms.CallFunc_GetUniqueID_UniqueServerID_2 = CallFunc_GetUniqueID_UniqueServerID_2;
	Parms.CallFunc_GetDT_DataTableRef = CallFunc_GetDT_DataTableRef;
	Parms.CallFunc_GetItemID_ItemID = CallFunc_GetItemID_ItemID;
	Parms.CallFunc_EquipItem_Equipped = CallFunc_EquipItem_Equipped;
	Parms.CallFunc_EquipItem_SlotItemRef = CallFunc_EquipItem_SlotItemRef;
	Parms.CallFunc_GetRootContainerRef_ContainerRef = CallFunc_GetRootContainerRef_ContainerRef;
	Parms.CallFunc_IsMainCharacter_ReturnValue = CallFunc_IsMainCharacter_ReturnValue;
	Parms.CallFunc_UpdateCount_Count = CallFunc_UpdateCount_Count;
	Parms.CallFunc_SetUniqueID_UniqueID = CallFunc_SetUniqueID_UniqueID;
	Parms.K2Node_CustomEvent_Current = K2Node_CustomEvent_Current;
	Parms.K2Node_CustomEvent_Max = K2Node_CustomEvent_Max;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue = CallFunc_GetPlayerActionMappingStatic_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPlayerActionMappingStatic_ReturnValue_1 = CallFunc_GetPlayerActionMappingStatic_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue_1 = CallFunc_Key_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


