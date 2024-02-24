#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Journal_SkillsUI.Journal_SkillsUI_C
// (None)

class UClass* UJournal_SkillsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Journal_SkillsUI_C");

	return Clss;
}


// Journal_SkillsUI_C Journal_SkillsUI.Default__Journal_SkillsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJournal_SkillsUI_C* UJournal_SkillsUI_C::GetDefaultObj()
{
	static class UJournal_SkillsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJournal_SkillsUI_C*>(UJournal_SkillsUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Scavenging_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Scavenging_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Scavenging_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Scavenging_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Scavenging Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Scavenging_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Scavenging Level");

	Params::UJournal_SkillsUI_C_Get_Next_Scavenging_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentScavengingLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentScavengingLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentScavengingLevel");

	Params::UJournal_SkillsUI_C_GetCurrentScavengingLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxScavengingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxScavengingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxScavengingXP");

	Params::UJournal_SkillsUI_C_GetMaxScavengingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentScavengingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentScavengingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentScavengingXP");

	Params::UJournal_SkillsUI_C_GetCurrentScavengingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.ScavengingXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::ScavengingXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "ScavengingXPMultiplier");

	Params::UJournal_SkillsUI_C_ScavengingXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.FishingXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::FishingXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "FishingXPMultiplier");

	Params::UJournal_SkillsUI_C_FishingXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.ThiefXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::ThiefXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "ThiefXPMultiplier");

	Params::UJournal_SkillsUI_C_ThiefXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.ReloadingXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::ReloadingXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "ReloadingXPMultiplier");

	Params::UJournal_SkillsUI_C_ReloadingXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.MarksmanshipXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::MarksmanshipXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "MarksmanshipXPMultiplier");

	Params::UJournal_SkillsUI_C_MarksmanshipXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.FirstAidXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::FirstAidXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "FirstAidXPMultiplier");

	Params::UJournal_SkillsUI_C_FirstAidXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.SneakingXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::SneakingXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "SneakingXPMultiplier");

	Params::UJournal_SkillsUI_C_SneakingXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.ToughnessXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::ToughnessXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "ToughnessXPMultiplier");

	Params::UJournal_SkillsUI_C_ToughnessXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.StrengthXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::StrengthXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "StrengthXPMultiplier");

	Params::UJournal_SkillsUI_C_StrengthXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.FitnessXPMultiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UJournal_SkillsUI_C::FitnessXPMultiplier(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "FitnessXPMultiplier");

	Params::UJournal_SkillsUI_C_FitnessXPMultiplier_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Fishing_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Fishing_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Fishing_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Fishing_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Fishing Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Fishing_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Fishing Level");

	Params::UJournal_SkillsUI_C_Get_Next_Fishing_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFishingLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFishingLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFishingLevel");

	Params::UJournal_SkillsUI_C_GetCurrentFishingLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFishingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxFishingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxFishingXP");

	Params::UJournal_SkillsUI_C_GetMaxFishingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFishingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFishingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFishingXP");

	Params::UJournal_SkillsUI_C_GetCurrentFishingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Thief_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Thief_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Thief_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Thief_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Thief Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Thief_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Thief Level");

	Params::UJournal_SkillsUI_C_Get_Next_Thief_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentThiefLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentThiefLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentThiefLevel");

	Params::UJournal_SkillsUI_C_GetCurrentThiefLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxThiefXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxThiefXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxThiefXP");

	Params::UJournal_SkillsUI_C_GetMaxThiefXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentThiefXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentThiefXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentThiefXP");

	Params::UJournal_SkillsUI_C_GetCurrentThiefXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetSkillPoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Append_Text_Return_Value                                (None)

class FText UJournal_SkillsUI_C::GetSkillPoints(class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Append_Text_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetSkillPoints");

	Params::UJournal_SkillsUI_C_GetSkillPoints_Params Parms{};

	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Append_Text_Return_Value = CallFunc_Append_Text_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Toughness_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Toughness_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Toughness_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Toughness_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Strength_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Strength_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Strength_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Strength_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Sneaking_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Sneaking_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Sneaking_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Sneaking_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Reloading_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Reloading_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Reloading_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Reloading_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.FirstAid_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::FirstAid_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "FirstAid_ToolTipWidget");

	Params::UJournal_SkillsUI_C_FirstAid_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Marksmanship_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Marksmanship_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Marksmanship_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Marksmanship_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Fitness_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UJournal_SkillsUI_C::Fitness_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Fitness_ToolTipWidget");

	Params::UJournal_SkillsUI_C_Fitness_ToolTipWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Reloading Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Reloading_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Reloading Level");

	Params::UJournal_SkillsUI_C_Get_Next_Reloading_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentReloadingLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentReloadingLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentReloadingLevel");

	Params::UJournal_SkillsUI_C_GetCurrentReloadingLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxReloadingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxReloadingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxReloadingXP");

	Params::UJournal_SkillsUI_C_GetMaxReloadingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentReloadingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentReloadingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentReloadingXP");

	Params::UJournal_SkillsUI_C_GetCurrentReloadingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Marksmanship Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Marksmanship_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Marksmanship Level");

	Params::UJournal_SkillsUI_C_Get_Next_Marksmanship_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentMarksmanshipLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentMarksmanshipLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentMarksmanshipLevel");

	Params::UJournal_SkillsUI_C_GetCurrentMarksmanshipLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxMarksmanshipXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxMarksmanshipXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxMarksmanshipXP");

	Params::UJournal_SkillsUI_C_GetMaxMarksmanshipXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentMarksmanshipXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentMarksmanshipXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentMarksmanshipXP");

	Params::UJournal_SkillsUI_C_GetCurrentMarksmanshipXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next First Aid Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_First_Aid_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next First Aid Level");

	Params::UJournal_SkillsUI_C_Get_Next_First_Aid_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFirstAidLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFirstAidLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFirstAidLevel");

	Params::UJournal_SkillsUI_C_GetCurrentFirstAidLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFirstAidXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxFirstAidXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxFirstAidXP");

	Params::UJournal_SkillsUI_C_GetMaxFirstAidXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFirstAidXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFirstAidXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFirstAidXP");

	Params::UJournal_SkillsUI_C_GetCurrentFirstAidXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Sneaking Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Sneaking_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Sneaking Level");

	Params::UJournal_SkillsUI_C_Get_Next_Sneaking_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentSneakingLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentSneakingLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentSneakingLevel");

	Params::UJournal_SkillsUI_C_GetCurrentSneakingLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxSneakingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxSneakingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxSneakingXP");

	Params::UJournal_SkillsUI_C_GetMaxSneakingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentSneakingXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentSneakingXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentSneakingXP");

	Params::UJournal_SkillsUI_C_GetCurrentSneakingXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Toughness Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Toughness_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Toughness Level");

	Params::UJournal_SkillsUI_C_Get_Next_Toughness_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentToughnessLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentToughnessLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentToughnessLevel");

	Params::UJournal_SkillsUI_C_GetCurrentToughnessLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxTougnessXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxTougnessXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxTougnessXP");

	Params::UJournal_SkillsUI_C_GetMaxTougnessXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentToughnessXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentToughnessXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentToughnessXP");

	Params::UJournal_SkillsUI_C_GetCurrentToughnessXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Strength Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Strength_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Strength Level");

	Params::UJournal_SkillsUI_C_Get_Next_Strength_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentStrengthLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentStrengthLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentStrengthLevel");

	Params::UJournal_SkillsUI_C_GetCurrentStrengthLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxStrengthXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxStrengthXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxStrengthXP");

	Params::UJournal_SkillsUI_C_GetMaxStrengthXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentStrengthXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentStrengthXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentStrengthXP");

	Params::UJournal_SkillsUI_C_GetCurrentStrengthXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Get Next Fitness Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::Get_Next_Fitness_Level(double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Get Next Fitness Level");

	Params::UJournal_SkillsUI_C_Get_Next_Fitness_Level_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFitnessLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFitnessLevel(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFitnessLevel");

	Params::UJournal_SkillsUI_C_GetCurrentFitnessLevel_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetMaxFitnessXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetMaxFitnessXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetMaxFitnessXP");

	Params::UJournal_SkillsUI_C_GetMaxFitnessXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.GetCurrentFitnessXP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)

class FText UJournal_SkillsUI_C::GetCurrentFitnessXP(class FText CallFunc_Conv_DoubleToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "GetCurrentFitnessXP");

	Params::UJournal_SkillsUI_C_GetCurrentFitnessXP_Params Parms{};

	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournal_SkillsUI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "PreConstruct");

	Params::UJournal_SkillsUI_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJournal_SkillsUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.BndEvt__Journal_SkillsUI_ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_SkillsUI_C::BndEvt__Journal_SkillsUI_ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "BndEvt__Journal_SkillsUI_ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_SkillsUI_C::BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UJournal_SkillsUI_C::BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "BndEvt__Journal_SkillsUITest_ResetButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Journal_SkillsUI.Journal_SkillsUI_C.ExecuteUbergraph_Journal_SkillsUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassiveSkillsComponent_C*   CallFunc_GetPassiveSkillsComponent_SkillsComponent               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UResetSkillsSelect_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTooltip_PassiveStats_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTechTreeComponent_C*        CallFunc_GetSkillTreeManager_TechTree                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UJournal_SkillsUI_C::ExecuteUbergraph_Journal_SkillsUI(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPassiveSkillsComponent_C* CallFunc_GetPassiveSkillsComponent_SkillsComponent, class UResetSkillsSelect_C* CallFunc_Create_ReturnValue, class UTooltip_PassiveStats_C* CallFunc_Create_ReturnValue_1, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Journal_SkillsUI_C", "ExecuteUbergraph_Journal_SkillsUI");

	Params::UJournal_SkillsUI_C_ExecuteUbergraph_Journal_SkillsUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPassiveSkillsComponent_SkillsComponent = CallFunc_GetPassiveSkillsComponent_SkillsComponent;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetSkillTreeManager_TechTree = CallFunc_GetSkillTreeManager_TechTree;

	UObject::ProcessEvent(Func, &Parms);

}

}


