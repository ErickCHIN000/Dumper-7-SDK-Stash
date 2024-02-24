#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentSwitcher_Notifier.UMG_TalentSwitcher_Notifier_C
// (None)

class UClass* UUMG_TalentSwitcher_Notifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentSwitcher_Notifier_C");

	return Clss;
}


// UMG_TalentSwitcher_Notifier_C UMG_TalentSwitcher_Notifier.Default__UMG_TalentSwitcher_Notifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentSwitcher_Notifier_C* UUMG_TalentSwitcher_Notifier_C::GetDefaultObj()
{
	static class UUMG_TalentSwitcher_Notifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentSwitcher_Notifier_C*>(UUMG_TalentSwitcher_Notifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentSwitcher_Notifier.UMG_TalentSwitcher_Notifier_C.Is Point Available
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasPoints                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentSwitcher_Notifier_C::Is_Point_Available(bool HasPoints, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_Notifier_C", "Is Point Available");

	Params::UUMG_TalentSwitcher_Notifier_C_Is_Point_Available_Params Parms{};

	Parms.HasPoints = HasPoints;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentSwitcher_Notifier.UMG_TalentSwitcher_Notifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentSwitcher_Notifier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_Notifier_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentSwitcher_Notifier.UMG_TalentSwitcher_Notifier_C.ExecuteUbergraph_UMG_TalentSwitcher_Notifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentSwitcher_Notifier_C::ExecuteUbergraph_UMG_TalentSwitcher_Notifier(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_Notifier_C", "ExecuteUbergraph_UMG_TalentSwitcher_Notifier");

	Params::UUMG_TalentSwitcher_Notifier_C_ExecuteUbergraph_UMG_TalentSwitcher_Notifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


