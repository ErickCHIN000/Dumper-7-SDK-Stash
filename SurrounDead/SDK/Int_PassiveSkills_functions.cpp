#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Int_PassiveSkills.Int_PassiveSkills_C
// (None)

class UClass* IInt_PassiveSkills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int_PassiveSkills_C");

	return Clss;
}


// Int_PassiveSkills_C Int_PassiveSkills.Default__Int_PassiveSkills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInt_PassiveSkills_C* IInt_PassiveSkills_C::GetDefaultObj()
{
	static class IInt_PassiveSkills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInt_PassiveSkills_C*>(IInt_PassiveSkills_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Scavenging
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Scavenging(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Scavenging");

	Params::IInt_PassiveSkills_C_XPMultiplier_Scavenging_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Scavenging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Scavenging(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Scavenging");

	Params::IInt_PassiveSkills_C_AddXP_Scavenging_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Fishing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Fishing(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Fishing");

	Params::IInt_PassiveSkills_C_XPMultiplier_Fishing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Thief
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Thief(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Thief");

	Params::IInt_PassiveSkills_C_XPMultiplier_Thief_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Reloading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Reloading(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Reloading");

	Params::IInt_PassiveSkills_C_XPMultiplier_Reloading_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Marksmanship
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Marksmanship(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Marksmanship");

	Params::IInt_PassiveSkills_C_XPMultiplier_Marksmanship_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_FirstAid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_FirstAid(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_FirstAid");

	Params::IInt_PassiveSkills_C_XPMultiplier_FirstAid_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Sneaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Sneaking(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Sneaking");

	Params::IInt_PassiveSkills_C_XPMultiplier_Sneaking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Toughness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Toughness(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Toughness");

	Params::IInt_PassiveSkills_C_XPMultiplier_Toughness_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Strength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Strength(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Strength");

	Params::IInt_PassiveSkills_C_XPMultiplier_Strength_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.XPMultiplier_Fitness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Used_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::XPMultiplier_Fitness(bool* Used_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "XPMultiplier_Fitness");

	Params::IInt_PassiveSkills_C_XPMultiplier_Fitness_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Used_ != nullptr)
		*Used_ = Parms.Used_;

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Fishing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Fishing(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Fishing");

	Params::IInt_PassiveSkills_C_AddXP_Fishing_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Thief
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Thief(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Thief");

	Params::IInt_PassiveSkills_C_AddXP_Thief_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Reloading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Reloading(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Reloading");

	Params::IInt_PassiveSkills_C_AddXP_Reloading_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Marksmanship
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Marksmanship(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Marksmanship");

	Params::IInt_PassiveSkills_C_AddXP_Marksmanship_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_FirstAid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_FirstAid(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_FirstAid");

	Params::IInt_PassiveSkills_C_AddXP_FirstAid_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Sneaking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Sneaking(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Sneaking");

	Params::IInt_PassiveSkills_C_AddXP_Sneaking_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Toughness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Toughness(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Toughness");

	Params::IInt_PassiveSkills_C_AddXP_Toughness_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Strength(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Strength");

	Params::IInt_PassiveSkills_C_AddXP_Strength_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Int_PassiveSkills.Int_PassiveSkills_C.AddXP_Fitness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_PassiveSkills_C::AddXP_Fitness(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int_PassiveSkills_C", "AddXP_Fitness");

	Params::IInt_PassiveSkills_C_AddXP_Fitness_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

}

}


