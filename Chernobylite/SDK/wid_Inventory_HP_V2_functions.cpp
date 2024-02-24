#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_HP_V2.wid_Inventory_HP_V2_C
// (None)

class UClass* UWid_Inventory_HP_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_HP_V2_C");

	return Clss;
}


// wid_Inventory_HP_V2_C wid_Inventory_HP_V2.Default__wid_Inventory_HP_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_HP_V2_C* UWid_Inventory_HP_V2_C::GetDefaultObj()
{
	static class UWid_Inventory_HP_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_HP_V2_C*>(UWid_Inventory_HP_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetMadness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetMadness(float Value, bool Instant, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetMadness");

	Params::UWid_Inventory_HP_V2_C_SetMadness_Params Parms{};

	Parms.Value = Value;
	Parms.Instant = Instant;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetArmorInfoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorEquipped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetArmorInfoVisibility(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsArmorEquipped_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetArmorInfoVisibility");

	Params::UWid_Inventory_HP_V2_C_SetArmorInfoVisibility_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsArmorEquipped_ReturnValue = CallFunc_IsArmorEquipped_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.GetRadiationFromSegments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxRadiation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUIBarSegments_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentRadiation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::GetRadiationFromSegments(float* Value, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_GetMaxRadiation_ReturnValue, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "GetRadiationFromSegments");

	Params::UWid_Inventory_HP_V2_C_GetRadiationFromSegments_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetMaxRadiation_ReturnValue = CallFunc_GetMaxRadiation_ReturnValue;
	Parms.CallFunc_GetUIBarSegments_ReturnValue = CallFunc_GetUIBarSegments_ReturnValue;
	Parms.CallFunc_GetCurrentRadiation_ReturnValue = CallFunc_GetCurrentRadiation_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.GetHealthFromSegments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHP_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUIBarSegments_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHP_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::GetHealthFromSegments(float* Value, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_GetMaxHP_ReturnValue, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "GetHealthFromSegments");

	Params::UWid_Inventory_HP_V2_C_GetHealthFromSegments_Params Parms{};

	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_GetUIBarSegments_ReturnValue = CallFunc_GetUIBarSegments_ReturnValue;
	Parms.CallFunc_GetCurrentHP_ReturnValue = CallFunc_GetCurrentHP_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ShowAnimCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::ShowAnimCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ShowAnimCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.HideAnimCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::HideAnimCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "HideAnimCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.HideBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::HideBar(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "HideBar");

	Params::UWid_Inventory_HP_V2_C_HideBar_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ShowBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::ShowBar(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ShowBar");

	Params::UWid_Inventory_HP_V2_C_ShowBar_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetFrenzy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetFrenzy(float Value, bool Instant, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetFrenzy");

	Params::UWid_Inventory_HP_V2_C_SetFrenzy_Params Parms{};

	Parms.Value = Value;
	Parms.Instant = Instant;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetPsyhe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceDontShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)

void UWid_Inventory_HP_V2_C::SetPsyhe(bool Instant, bool ForceDontShow, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetPsyhe");

	Params::UWid_Inventory_HP_V2_C_SetPsyhe_Params Parms{};

	Parms.Instant = Instant;
	Parms.ForceDontShow = ForceDontShow;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetRadiation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetRadiation(float Value, bool Instant, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetRadiation");

	Params::UWid_Inventory_HP_V2_C_SetRadiation_Params Parms{};

	Parms.Value = Value;
	Parms.Instant = Instant;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Instant                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetHealth(float Selection, bool Instant, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetHealth");

	Params::UWid_Inventory_HP_V2_C_SetHealth_Params Parms{};

	Parms.Selection = Selection;
	Parms.Instant = Instant;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "Tick");

	Params::UWid_Inventory_HP_V2_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.HealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            Phase                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UDamageType>     InDamageClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::HealthChanged(float OldHealth, float NewHealth, enum class EHealthPhase Phase, TSubclassOf<class UDamageType> InDamageClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "HealthChanged");

	Params::UWid_Inventory_HP_V2_C_HealthChanged_Params Parms{};

	Parms.OldHealth = OldHealth;
	Parms.NewHealth = NewHealth;
	Parms.Phase = Phase;
	Parms.InDamageClass = InDamageClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.RadiationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            Phase                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::RadiationChanged(float OldRadiation, float NewRadiation, enum class EHealthPhase Phase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "RadiationChanged");

	Params::UWid_Inventory_HP_V2_C_RadiationChanged_Params Parms{};

	Parms.OldRadiation = OldRadiation;
	Parms.NewRadiation = NewRadiation;
	Parms.Phase = Phase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.SetOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Val1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Val2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::SetOpacity(float Val1, float Val2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "SetOpacity");

	Params::UWid_Inventory_HP_V2_C_SetOpacity_Params Parms{};

	Parms.Val1 = Val1;
	Parms.Val2 = Val2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.DelayedHideAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::DelayedHideAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "DelayedHideAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ArmorValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::ArmorValueChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ArmorValueChanged");

	Params::UWid_Inventory_HP_V2_C_ArmorValueChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ArmorChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::ArmorChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ArmorChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ArmorLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::ArmorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ArmorLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.OnMadnessChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PreviousValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::OnMadnessChanged(float PreviousValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "OnMadnessChanged");

	Params::UWid_Inventory_HP_V2_C_OnMadnessChanged_Params Parms{};

	Parms.PreviousValue = PreviousValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.UpdateMadness
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_HP_V2_C::UpdateMadness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "UpdateMadness");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_HP_V2.wid_Inventory_HP_V2_C.ExecuteUbergraph_wid_Inventory_HP_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentMadness_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            K2Node_CustomEvent_Phase_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UDamageType>     K2Node_CustomEvent_InDamageClass                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldRadiation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewRadiation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            K2Node_CustomEvent_Phase                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentRadiation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHP_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Val1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Val2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRadiationThreshold_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRadiationThreshold_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUIBarSegments_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentArmorValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_oldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_newValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentArmorValue_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorEquipped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxArmorValue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorEquipped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxArmorValue_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentMadness_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PreviousValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_newValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_HP_V2_C::ExecuteUbergraph_wid_Inventory_HP_V2(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetCurrentMadness_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_CustomEvent_OldHealth, float K2Node_CustomEvent_NewHealth, enum class EHealthPhase K2Node_CustomEvent_Phase_1, TSubclassOf<class UDamageType> K2Node_CustomEvent_InDamageClass, float K2Node_CustomEvent_OldRadiation, float K2Node_CustomEvent_NewRadiation, enum class EHealthPhase K2Node_CustomEvent_Phase, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float K2Node_CustomEvent_Val1, float K2Node_CustomEvent_Val2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_GetRadiationThreshold_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetRadiationThreshold_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetUIBarSegments_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_GetCurrentArmorValue_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_oldValue, float K2Node_CustomEvent_newValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, float CallFunc_GetCurrentArmorValue_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, bool CallFunc_IsArmorEquipped_ReturnValue, float CallFunc_GetMaxArmorValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, bool CallFunc_IsArmorEquipped_ReturnValue_1, float CallFunc_GetMaxArmorValue_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_GetCurrentMadness_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, float K2Node_CustomEvent_PreviousValue, float K2Node_CustomEvent_newValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_HP_V2_C", "ExecuteUbergraph_wid_Inventory_HP_V2");

	Params::UWid_Inventory_HP_V2_C_ExecuteUbergraph_wid_Inventory_HP_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentMadness_ReturnValue = CallFunc_GetCurrentMadness_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_OldHealth = K2Node_CustomEvent_OldHealth;
	Parms.K2Node_CustomEvent_NewHealth = K2Node_CustomEvent_NewHealth;
	Parms.K2Node_CustomEvent_Phase_1 = K2Node_CustomEvent_Phase_1;
	Parms.K2Node_CustomEvent_InDamageClass = K2Node_CustomEvent_InDamageClass;
	Parms.K2Node_CustomEvent_OldRadiation = K2Node_CustomEvent_OldRadiation;
	Parms.K2Node_CustomEvent_NewRadiation = K2Node_CustomEvent_NewRadiation;
	Parms.K2Node_CustomEvent_Phase = K2Node_CustomEvent_Phase;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCurrentRadiation_ReturnValue = CallFunc_GetCurrentRadiation_ReturnValue;
	Parms.CallFunc_GetCurrentHP_ReturnValue = CallFunc_GetCurrentHP_ReturnValue;
	Parms.K2Node_CustomEvent_Val1 = K2Node_CustomEvent_Val1;
	Parms.K2Node_CustomEvent_Val2 = K2Node_CustomEvent_Val2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetRadiationThreshold_ReturnValue = CallFunc_GetRadiationThreshold_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRadiationThreshold_ReturnValue_1 = CallFunc_GetRadiationThreshold_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetUIBarSegments_ReturnValue = CallFunc_GetUIBarSegments_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentArmorValue_ReturnValue = CallFunc_GetCurrentArmorValue_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_oldValue = K2Node_CustomEvent_oldValue;
	Parms.K2Node_CustomEvent_newValue_1 = K2Node_CustomEvent_newValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCurrentArmorValue_ReturnValue_1 = CallFunc_GetCurrentArmorValue_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_IsArmorEquipped_ReturnValue = CallFunc_IsArmorEquipped_ReturnValue;
	Parms.CallFunc_GetMaxArmorValue_ReturnValue = CallFunc_GetMaxArmorValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_IsArmorEquipped_ReturnValue_1 = CallFunc_IsArmorEquipped_ReturnValue_1;
	Parms.CallFunc_GetMaxArmorValue_ReturnValue_1 = CallFunc_GetMaxArmorValue_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetCurrentMadness_ReturnValue_1 = CallFunc_GetCurrentMadness_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.K2Node_CustomEvent_PreviousValue = K2Node_CustomEvent_PreviousValue;
	Parms.K2Node_CustomEvent_newValue = K2Node_CustomEvent_newValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


