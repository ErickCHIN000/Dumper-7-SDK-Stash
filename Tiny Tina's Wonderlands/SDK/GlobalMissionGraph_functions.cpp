#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalMissionGraph.GlobalMissionGraph_C
// (None)

class UClass* UGlobalMissionGraph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalMissionGraph_C");

	return Clss;
}


// GlobalMissionGraph_C GlobalMissionGraph.Default__GlobalMissionGraph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalMissionGraph_C* UGlobalMissionGraph_C::GetDefaultObj()
{
	static class UGlobalMissionGraph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalMissionGraph_C*>(UGlobalMissionGraph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Knight's Toil]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Knight_s_Toil_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Knight's Toil]");

	Params::UGlobalMissionGraph_C__A_Knight_s_Toil__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Twenty Thousand Years Under the Sea]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Twenty_Thousand_Years_Under_the_Sea_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Twenty Thousand Years Under the Sea]");

	Params::UGlobalMissionGraph_C__Twenty_Thousand_Years_Under_the_Sea__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Hot Fizz]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Hot_Fizz_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Hot Fizz]");

	Params::UGlobalMissionGraph_C__Hot_Fizz__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Inner Demons]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Inner_Demons_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Inner Demons]");

	Params::UGlobalMissionGraph_C__Inner_Demons__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Gumbo No. 5]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Gumbo_No__5_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Gumbo No. 5]");

	Params::UGlobalMissionGraph_C__Gumbo_No__5__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Lyre and Brimstone]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Lyre_and_Brimstone_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Lyre and Brimstone]");

	Params::UGlobalMissionGraph_C__Lyre_and_Brimstone__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Necromance Her]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Necromance_Her_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Necromance Her]");

	Params::UGlobalMissionGraph_C__Necromance_Her__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Raiders of the Lost Shark]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Raiders_of_the_Lost_Shark_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Raiders of the Lost Shark]");

	Params::UGlobalMissionGraph_C__Raiders_of_the_Lost_Shark__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Cash 4 Teeth]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Cash_4_Teeth_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Cash 4 Teeth]");

	Params::UGlobalMissionGraph_C__Cash_4_Teeth__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Bunkers & Badasses]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Bunkers___Badasses_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Bunkers & Badasses]");

	Params::UGlobalMissionGraph_C__Bunkers___Badasses__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ballad of Bones]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ballad_of_Bones_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ballad of Bones]");

	Params::UGlobalMissionGraph_C__Ballad_of_Bones__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Hard Day's Knight]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Hard_Day_s_Knight_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Hard Day's Knight]");

	Params::UGlobalMissionGraph_C__A_Hard_Day_s_Knight__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Mortal Coil]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Mortal_Coil_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Mortal Coil]");

	Params::UGlobalMissionGraph_C__Mortal_Coil__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[The Son of a Witch]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_The_Son_of_a_Witch_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[The Son of a Witch]");

	Params::UGlobalMissionGraph_C__The_Son_of_a_Witch__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Goblins Tired of Forced Oppression]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Goblins_Tired_of_Forced_Oppression_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Goblins Tired of Forced Oppression]");

	Params::UGlobalMissionGraph_C__Goblins_Tired_of_Forced_Oppression__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[The Ditcher]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_The_Ditcher_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[The Ditcher]");

	Params::UGlobalMissionGraph_C__The_Ditcher__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[All Swashed Up]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_All_Swashed_Up_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[All Swashed Up]");

	Params::UGlobalMissionGraph_C__All_Swashed_Up__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Forgery]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Forgery_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Forgery]");

	Params::UGlobalMissionGraph_C__Forgery__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Little Boys Blue]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Little_Boys_Blue_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Little Boys Blue]");

	Params::UGlobalMissionGraph_C__Little_Boys_Blue__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Wandering Aye]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Wandering_Aye_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Wandering Aye]");

	Params::UGlobalMissionGraph_C__A_Wandering_Aye__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Small Favor]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Small_Favor_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Small Favor]");

	Params::UGlobalMissionGraph_C__A_Small_Favor__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Burning Hunger]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Burning_Hunger_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Burning Hunger]");

	Params::UGlobalMissionGraph_C__Burning_Hunger__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Non-Violent Offender]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_NonMinusViolent_Offender_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Non-Violent Offender]");

	Params::UGlobalMissionGraph_C__NonMinusViolent_Offender__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Walk to Dismember]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Walk_to_Dismember_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Walk to Dismember]");

	Params::UGlobalMissionGraph_C__A_Walk_to_Dismember__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[In the Belly Is a Beast]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_In_the_Belly_Is_a_Beast_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[In the Belly Is a Beast]");

	Params::UGlobalMissionGraph_C__In_the_Belly_Is_a_Beast__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[The Trial of Crooked-Eye Phil]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_The_Trial_of_CrookedMinusEye_Phil_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[The Trial of Crooked-Eye Phil]");

	Params::UGlobalMissionGraph_C__The_Trial_of_CrookedMinusEye_Phil__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Goblins in the Garden]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Goblins_in_the_Garden_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Goblins in the Garden]");

	Params::UGlobalMissionGraph_C__Goblins_in_the_Garden__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Farmer's Ardor]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Farmer_s_Ardor_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Farmer's Ardor]");

	Params::UGlobalMissionGraph_C__A_Farmer_s_Ardor__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ancient Powers]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ancient_Powers_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ancient Powers]");

	Params::UGlobalMissionGraph_C__Ancient_Powers__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Spell to Pay]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Spell_to_Pay_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Spell to Pay]");

	Params::UGlobalMissionGraph_C__Spell_to_Pay__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Fatebreaker]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Fatebreaker_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Fatebreaker]");

	Params::UGlobalMissionGraph_C__Fatebreaker__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Diplomatic Relations]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Diplomatic_Relations_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Diplomatic Relations]");

	Params::UGlobalMissionGraph_C__Diplomatic_Relations__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ancient Powers (Part 2)]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ancient_Powers__Part_2__(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ancient Powers (Part 2)]");

	Params::UGlobalMissionGraph_C__Ancient_Powers__Part_2___Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Walk the Stalk]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Walk_the_Stalk_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Walk the Stalk]");

	Params::UGlobalMissionGraph_C__Walk_the_Stalk__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Armageddon Distracted]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Armageddon_Distracted_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Armageddon Distracted]");

	Params::UGlobalMissionGraph_C__Armageddon_Distracted__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[On the Wink of Destruction]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_On_the_Wink_of_Destruction_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[On the Wink of Destruction]");

	Params::UGlobalMissionGraph_C__On_the_Wink_of_Destruction__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Of Curse and Claw]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Of_Curse_and_Claw_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Of Curse and Claw]");

	Params::UGlobalMissionGraph_C__Of_Curse_and_Claw__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Soul Purpose]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Soul_Purpose_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Soul Purpose]");

	Params::UGlobalMissionGraph_C__Soul_Purpose__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Emotion of the Ocean]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Emotion_of_the_Ocean_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Emotion of the Ocean]");

	Params::UGlobalMissionGraph_C__Emotion_of_the_Ocean__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ron Rivote]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ron_Rivote_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ron Rivote]");

	Params::UGlobalMissionGraph_C__Ron_Rivote__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ancient Powers (Part 3)]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ancient_Powers__Part_3__(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ancient Powers (Part 3)]");

	Params::UGlobalMissionGraph_C__Ancient_Powers__Part_3___Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ancient Powers (Part 4)]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ancient_Powers__Part_4__(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ancient Powers (Part 4)]");

	Params::UGlobalMissionGraph_C__Ancient_Powers__Part_4___Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Ancient Powers (Part 5)]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Ancient_Powers__Part_5__(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Ancient Powers (Part 5)]");

	Params::UGlobalMissionGraph_C__Ancient_Powers__Part_5___Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Thy Bard, with a Vengeance]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Thy_Bard__with_a_Vengeance_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Thy Bard, with a Vengeance]");

	Params::UGlobalMissionGraph_C__Thy_Bard__with_a_Vengeance__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Hero of Brighthoof]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Hero_of_Brighthoof_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Hero of Brighthoof]");

	Params::UGlobalMissionGraph_C__Hero_of_Brighthoof__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Knife to Meet You]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Knife_to_Meet_You_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Knife to Meet You]");

	Params::UGlobalMissionGraph_C__Knife_to_Meet_You__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Alchemy: Precious Metals]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Alchemy__Precious_Metals_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Alchemy: Precious Metals]");

	Params::UGlobalMissionGraph_C__Alchemy__Precious_Metals__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Realm in Peril]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Realm_in_Peril_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Realm in Peril]");

	Params::UGlobalMissionGraph_C__A_Realm_in_Peril__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Working Blueprint]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Working_Blueprint_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Working Blueprint]");

	Params::UGlobalMissionGraph_C__Working_Blueprint__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Cheesy Pick-Up]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Cheesy_PickMinusUp_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Cheesy Pick-Up]");

	Params::UGlobalMissionGraph_C__Cheesy_PickMinusUp__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[In My Image]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_In_My_Image_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[In My Image]");

	Params::UGlobalMissionGraph_C__In_My_Image__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Alchemy: Miracle Growth]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Alchemy__Miracle_Growth_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Alchemy: Miracle Growth]");

	Params::UGlobalMissionGraph_C__Alchemy__Miracle_Growth__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Clerical Error]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Clerical_Error_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Clerical Error]");

	Params::UGlobalMissionGraph_C__Clerical_Error__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Cheat-Sneak]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_CheatMinusSneak_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Cheat-Sneak]");

	Params::UGlobalMissionGraph_C__CheatMinusSneak__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[On Wings and Dreams]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_On_Wings_and_Dreams_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[On Wings and Dreams]");

	Params::UGlobalMissionGraph_C__On_Wings_and_Dreams__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Alchemy: To Block the Sun]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Alchemy__To_Block_the_Sun_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Alchemy: To Block the Sun]");

	Params::UGlobalMissionGraph_C__Alchemy__To_Block_the_Sun__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Destruction Rains from the Heavens]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Destruction_Rains_from_the_Heavens_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Destruction Rains from the Heavens]");

	Params::UGlobalMissionGraph_C__Destruction_Rains_from_the_Heavens__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Eye Lost It]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Eye_Lost_It_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Eye Lost It]");

	Params::UGlobalMissionGraph_C__Eye_Lost_It__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Pocket Sandstorm]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Pocket_Sandstorm_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Pocket Sandstorm]");

	Params::UGlobalMissionGraph_C__Pocket_Sandstorm__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Legendary Bow]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Legendary_Bow_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Legendary Bow]");

	Params::UGlobalMissionGraph_C__Legendary_Bow__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[A Pet's Rest]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_A_Pet_s_Rest_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[A Pet's Rest]");

	Params::UGlobalMissionGraph_C__A_Pet_s_Rest__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[Epilogue]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_Epilogue_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[Epilogue]");

	Params::UGlobalMissionGraph_C__Epilogue__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.[The Slayer of Vorcanar]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Unlocks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Next_Mission                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::_The_Slayer_of_Vorcanar_(class UObject* Unlocks, class UObject* Next_Mission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "[The Slayer of Vorcanar]");

	Params::UGlobalMissionGraph_C__The_Slayer_of_Vorcanar__Params Parms{};

	Parms.Unlocks = Unlocks;
	Parms.Next_Mission = Next_Mission;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalMissionGraph.GlobalMissionGraph_C.ExecuteUbergraph_GlobalMissionGraph
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks62                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission62                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks56                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission56                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks55                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission55                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks54                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission54                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks53                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission53                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks52                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission52                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks51                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission51                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks57                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission57                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks50                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission50                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks49                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission49                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks48                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission48                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks47                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission47                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks46                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission46                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks45                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission45                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks44                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission44                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks43                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission43                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks42                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission42                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks41                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission41                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks40                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission40                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks39                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission39                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks38                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission38                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks37                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission37                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks36                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission36                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks35                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission35                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks34                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission34                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks33                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission33                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks32                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission32                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks31                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission31                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks30                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission30                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks29                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission29                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks28                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission28                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks27                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission27                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks26                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission26                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission25                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission24                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission23                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission22                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission21                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission20                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission19                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks58                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission58                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks59                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission59                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission18                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks60                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission60                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Unlocks61                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionRefEvent_Next_Mission61                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalMissionGraph_C::ExecuteUbergraph_GlobalMissionGraph(int32 EntryPoint, class UObject* MissionK2Node_MissionRefEvent_Unlocks62, class UObject* MissionK2Node_MissionRefEvent_Next_Mission62, class UObject* MissionK2Node_MissionRefEvent_Unlocks56, class UObject* MissionK2Node_MissionRefEvent_Next_Mission56, class UObject* MissionK2Node_MissionRefEvent_Unlocks55, class UObject* MissionK2Node_MissionRefEvent_Next_Mission55, class UObject* MissionK2Node_MissionRefEvent_Unlocks54, class UObject* MissionK2Node_MissionRefEvent_Next_Mission54, class UObject* MissionK2Node_MissionRefEvent_Unlocks53, class UObject* MissionK2Node_MissionRefEvent_Next_Mission53, class UObject* MissionK2Node_MissionRefEvent_Unlocks52, class UObject* MissionK2Node_MissionRefEvent_Next_Mission52, class UObject* MissionK2Node_MissionRefEvent_Unlocks51, class UObject* MissionK2Node_MissionRefEvent_Next_Mission51, class UObject* MissionK2Node_MissionRefEvent_Unlocks57, class UObject* MissionK2Node_MissionRefEvent_Next_Mission57, class UObject* MissionK2Node_MissionRefEvent_Unlocks50, class UObject* MissionK2Node_MissionRefEvent_Next_Mission50, class UObject* MissionK2Node_MissionRefEvent_Unlocks49, class UObject* MissionK2Node_MissionRefEvent_Next_Mission49, class UObject* MissionK2Node_MissionRefEvent_Unlocks48, class UObject* MissionK2Node_MissionRefEvent_Next_Mission48, class UObject* MissionK2Node_MissionRefEvent_Unlocks47, class UObject* MissionK2Node_MissionRefEvent_Next_Mission47, class UObject* MissionK2Node_MissionRefEvent_Unlocks46, class UObject* MissionK2Node_MissionRefEvent_Next_Mission46, class UObject* MissionK2Node_MissionRefEvent_Unlocks45, class UObject* MissionK2Node_MissionRefEvent_Next_Mission45, class UObject* MissionK2Node_MissionRefEvent_Unlocks44, class UObject* MissionK2Node_MissionRefEvent_Next_Mission44, class UObject* MissionK2Node_MissionRefEvent_Unlocks43, class UObject* MissionK2Node_MissionRefEvent_Next_Mission43, class UObject* MissionK2Node_MissionRefEvent_Unlocks42, class UObject* MissionK2Node_MissionRefEvent_Next_Mission42, class UObject* MissionK2Node_MissionRefEvent_Unlocks41, class UObject* MissionK2Node_MissionRefEvent_Next_Mission41, class UObject* MissionK2Node_MissionRefEvent_Unlocks40, class UObject* MissionK2Node_MissionRefEvent_Next_Mission40, class UObject* MissionK2Node_MissionRefEvent_Unlocks39, class UObject* MissionK2Node_MissionRefEvent_Next_Mission39, class UObject* MissionK2Node_MissionRefEvent_Unlocks38, class UObject* MissionK2Node_MissionRefEvent_Next_Mission38, class UObject* MissionK2Node_MissionRefEvent_Unlocks37, class UObject* MissionK2Node_MissionRefEvent_Next_Mission37, class UObject* MissionK2Node_MissionRefEvent_Unlocks36, class UObject* MissionK2Node_MissionRefEvent_Next_Mission36, class UObject* MissionK2Node_MissionRefEvent_Unlocks35, class UObject* MissionK2Node_MissionRefEvent_Next_Mission35, class UObject* MissionK2Node_MissionRefEvent_Unlocks34, class UObject* MissionK2Node_MissionRefEvent_Next_Mission34, class UObject* MissionK2Node_MissionRefEvent_Unlocks33, class UObject* MissionK2Node_MissionRefEvent_Next_Mission33, class UObject* MissionK2Node_MissionRefEvent_Unlocks32, class UObject* MissionK2Node_MissionRefEvent_Next_Mission32, class UObject* MissionK2Node_MissionRefEvent_Unlocks31, class UObject* MissionK2Node_MissionRefEvent_Next_Mission31, class UObject* MissionK2Node_MissionRefEvent_Unlocks30, class UObject* MissionK2Node_MissionRefEvent_Next_Mission30, class UObject* MissionK2Node_MissionRefEvent_Unlocks29, class UObject* MissionK2Node_MissionRefEvent_Next_Mission29, class UObject* MissionK2Node_MissionRefEvent_Unlocks28, class UObject* MissionK2Node_MissionRefEvent_Next_Mission28, class UObject* MissionK2Node_MissionRefEvent_Unlocks27, class UObject* MissionK2Node_MissionRefEvent_Next_Mission27, class UObject* MissionK2Node_MissionRefEvent_Unlocks26, class UObject* MissionK2Node_MissionRefEvent_Next_Mission26, class UObject* MissionK2Node_MissionRefEvent_Unlocks25, class UObject* MissionK2Node_MissionRefEvent_Next_Mission25, class UObject* MissionK2Node_MissionRefEvent_Unlocks24, class UObject* MissionK2Node_MissionRefEvent_Next_Mission24, class UObject* MissionK2Node_MissionRefEvent_Unlocks23, class UObject* MissionK2Node_MissionRefEvent_Next_Mission23, class UObject* MissionK2Node_MissionRefEvent_Unlocks22, class UObject* MissionK2Node_MissionRefEvent_Next_Mission22, class UObject* MissionK2Node_MissionRefEvent_Unlocks21, class UObject* MissionK2Node_MissionRefEvent_Next_Mission21, class UObject* MissionK2Node_MissionRefEvent_Unlocks20, class UObject* MissionK2Node_MissionRefEvent_Next_Mission20, class UObject* MissionK2Node_MissionRefEvent_Unlocks19, class UObject* MissionK2Node_MissionRefEvent_Next_Mission19, class UObject* MissionK2Node_MissionRefEvent_Unlocks58, class UObject* MissionK2Node_MissionRefEvent_Next_Mission58, class UObject* MissionK2Node_MissionRefEvent_Unlocks59, class UObject* MissionK2Node_MissionRefEvent_Next_Mission59, class UObject* MissionK2Node_MissionRefEvent_Unlocks18, class UObject* MissionK2Node_MissionRefEvent_Next_Mission18, class UObject* MissionK2Node_MissionRefEvent_Unlocks17, class UObject* MissionK2Node_MissionRefEvent_Next_Mission17, class UObject* MissionK2Node_MissionRefEvent_Unlocks16, class UObject* MissionK2Node_MissionRefEvent_Next_Mission16, class UObject* MissionK2Node_MissionRefEvent_Unlocks15, class UObject* MissionK2Node_MissionRefEvent_Next_Mission15, class UObject* MissionK2Node_MissionRefEvent_Unlocks14, class UObject* MissionK2Node_MissionRefEvent_Next_Mission14, class UObject* MissionK2Node_MissionRefEvent_Unlocks13, class UObject* MissionK2Node_MissionRefEvent_Next_Mission13, class UObject* MissionK2Node_MissionRefEvent_Unlocks12, class UObject* MissionK2Node_MissionRefEvent_Next_Mission12, class UObject* MissionK2Node_MissionRefEvent_Unlocks11, class UObject* MissionK2Node_MissionRefEvent_Next_Mission11, class UObject* MissionK2Node_MissionRefEvent_Unlocks10, class UObject* MissionK2Node_MissionRefEvent_Next_Mission10, class UObject* MissionK2Node_MissionRefEvent_Unlocks9, class UObject* MissionK2Node_MissionRefEvent_Next_Mission9, class UObject* MissionK2Node_MissionRefEvent_Unlocks8, class UObject* MissionK2Node_MissionRefEvent_Next_Mission8, class UObject* MissionK2Node_MissionRefEvent_Unlocks7, class UObject* MissionK2Node_MissionRefEvent_Next_Mission7, class UObject* MissionK2Node_MissionRefEvent_Unlocks6, class UObject* MissionK2Node_MissionRefEvent_Next_Mission6, class UObject* MissionK2Node_MissionRefEvent_Unlocks5, class UObject* MissionK2Node_MissionRefEvent_Next_Mission5, class UObject* MissionK2Node_MissionRefEvent_Unlocks4, class UObject* MissionK2Node_MissionRefEvent_Next_Mission4, class UObject* MissionK2Node_MissionRefEvent_Unlocks3, class UObject* MissionK2Node_MissionRefEvent_Next_Mission3, class UObject* MissionK2Node_MissionRefEvent_Unlocks2, class UObject* MissionK2Node_MissionRefEvent_Next_Mission2, class UObject* MissionK2Node_MissionRefEvent_Unlocks60, class UObject* MissionK2Node_MissionRefEvent_Next_Mission60, class UObject* MissionK2Node_MissionRefEvent_Unlocks1, class UObject* MissionK2Node_MissionRefEvent_Next_Mission1, class UObject* MissionK2Node_MissionRefEvent_Unlocks, class UObject* MissionK2Node_MissionRefEvent_Next_Mission, class UObject* MissionK2Node_MissionRefEvent_Unlocks61, class UObject* MissionK2Node_MissionRefEvent_Next_Mission61)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMissionGraph_C", "ExecuteUbergraph_GlobalMissionGraph");

	Params::UGlobalMissionGraph_C_ExecuteUbergraph_GlobalMissionGraph_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.MissionK2Node_MissionRefEvent_Unlocks62 = MissionK2Node_MissionRefEvent_Unlocks62;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission62 = MissionK2Node_MissionRefEvent_Next_Mission62;
	Parms.MissionK2Node_MissionRefEvent_Unlocks56 = MissionK2Node_MissionRefEvent_Unlocks56;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission56 = MissionK2Node_MissionRefEvent_Next_Mission56;
	Parms.MissionK2Node_MissionRefEvent_Unlocks55 = MissionK2Node_MissionRefEvent_Unlocks55;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission55 = MissionK2Node_MissionRefEvent_Next_Mission55;
	Parms.MissionK2Node_MissionRefEvent_Unlocks54 = MissionK2Node_MissionRefEvent_Unlocks54;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission54 = MissionK2Node_MissionRefEvent_Next_Mission54;
	Parms.MissionK2Node_MissionRefEvent_Unlocks53 = MissionK2Node_MissionRefEvent_Unlocks53;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission53 = MissionK2Node_MissionRefEvent_Next_Mission53;
	Parms.MissionK2Node_MissionRefEvent_Unlocks52 = MissionK2Node_MissionRefEvent_Unlocks52;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission52 = MissionK2Node_MissionRefEvent_Next_Mission52;
	Parms.MissionK2Node_MissionRefEvent_Unlocks51 = MissionK2Node_MissionRefEvent_Unlocks51;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission51 = MissionK2Node_MissionRefEvent_Next_Mission51;
	Parms.MissionK2Node_MissionRefEvent_Unlocks57 = MissionK2Node_MissionRefEvent_Unlocks57;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission57 = MissionK2Node_MissionRefEvent_Next_Mission57;
	Parms.MissionK2Node_MissionRefEvent_Unlocks50 = MissionK2Node_MissionRefEvent_Unlocks50;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission50 = MissionK2Node_MissionRefEvent_Next_Mission50;
	Parms.MissionK2Node_MissionRefEvent_Unlocks49 = MissionK2Node_MissionRefEvent_Unlocks49;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission49 = MissionK2Node_MissionRefEvent_Next_Mission49;
	Parms.MissionK2Node_MissionRefEvent_Unlocks48 = MissionK2Node_MissionRefEvent_Unlocks48;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission48 = MissionK2Node_MissionRefEvent_Next_Mission48;
	Parms.MissionK2Node_MissionRefEvent_Unlocks47 = MissionK2Node_MissionRefEvent_Unlocks47;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission47 = MissionK2Node_MissionRefEvent_Next_Mission47;
	Parms.MissionK2Node_MissionRefEvent_Unlocks46 = MissionK2Node_MissionRefEvent_Unlocks46;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission46 = MissionK2Node_MissionRefEvent_Next_Mission46;
	Parms.MissionK2Node_MissionRefEvent_Unlocks45 = MissionK2Node_MissionRefEvent_Unlocks45;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission45 = MissionK2Node_MissionRefEvent_Next_Mission45;
	Parms.MissionK2Node_MissionRefEvent_Unlocks44 = MissionK2Node_MissionRefEvent_Unlocks44;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission44 = MissionK2Node_MissionRefEvent_Next_Mission44;
	Parms.MissionK2Node_MissionRefEvent_Unlocks43 = MissionK2Node_MissionRefEvent_Unlocks43;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission43 = MissionK2Node_MissionRefEvent_Next_Mission43;
	Parms.MissionK2Node_MissionRefEvent_Unlocks42 = MissionK2Node_MissionRefEvent_Unlocks42;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission42 = MissionK2Node_MissionRefEvent_Next_Mission42;
	Parms.MissionK2Node_MissionRefEvent_Unlocks41 = MissionK2Node_MissionRefEvent_Unlocks41;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission41 = MissionK2Node_MissionRefEvent_Next_Mission41;
	Parms.MissionK2Node_MissionRefEvent_Unlocks40 = MissionK2Node_MissionRefEvent_Unlocks40;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission40 = MissionK2Node_MissionRefEvent_Next_Mission40;
	Parms.MissionK2Node_MissionRefEvent_Unlocks39 = MissionK2Node_MissionRefEvent_Unlocks39;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission39 = MissionK2Node_MissionRefEvent_Next_Mission39;
	Parms.MissionK2Node_MissionRefEvent_Unlocks38 = MissionK2Node_MissionRefEvent_Unlocks38;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission38 = MissionK2Node_MissionRefEvent_Next_Mission38;
	Parms.MissionK2Node_MissionRefEvent_Unlocks37 = MissionK2Node_MissionRefEvent_Unlocks37;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission37 = MissionK2Node_MissionRefEvent_Next_Mission37;
	Parms.MissionK2Node_MissionRefEvent_Unlocks36 = MissionK2Node_MissionRefEvent_Unlocks36;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission36 = MissionK2Node_MissionRefEvent_Next_Mission36;
	Parms.MissionK2Node_MissionRefEvent_Unlocks35 = MissionK2Node_MissionRefEvent_Unlocks35;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission35 = MissionK2Node_MissionRefEvent_Next_Mission35;
	Parms.MissionK2Node_MissionRefEvent_Unlocks34 = MissionK2Node_MissionRefEvent_Unlocks34;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission34 = MissionK2Node_MissionRefEvent_Next_Mission34;
	Parms.MissionK2Node_MissionRefEvent_Unlocks33 = MissionK2Node_MissionRefEvent_Unlocks33;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission33 = MissionK2Node_MissionRefEvent_Next_Mission33;
	Parms.MissionK2Node_MissionRefEvent_Unlocks32 = MissionK2Node_MissionRefEvent_Unlocks32;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission32 = MissionK2Node_MissionRefEvent_Next_Mission32;
	Parms.MissionK2Node_MissionRefEvent_Unlocks31 = MissionK2Node_MissionRefEvent_Unlocks31;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission31 = MissionK2Node_MissionRefEvent_Next_Mission31;
	Parms.MissionK2Node_MissionRefEvent_Unlocks30 = MissionK2Node_MissionRefEvent_Unlocks30;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission30 = MissionK2Node_MissionRefEvent_Next_Mission30;
	Parms.MissionK2Node_MissionRefEvent_Unlocks29 = MissionK2Node_MissionRefEvent_Unlocks29;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission29 = MissionK2Node_MissionRefEvent_Next_Mission29;
	Parms.MissionK2Node_MissionRefEvent_Unlocks28 = MissionK2Node_MissionRefEvent_Unlocks28;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission28 = MissionK2Node_MissionRefEvent_Next_Mission28;
	Parms.MissionK2Node_MissionRefEvent_Unlocks27 = MissionK2Node_MissionRefEvent_Unlocks27;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission27 = MissionK2Node_MissionRefEvent_Next_Mission27;
	Parms.MissionK2Node_MissionRefEvent_Unlocks26 = MissionK2Node_MissionRefEvent_Unlocks26;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission26 = MissionK2Node_MissionRefEvent_Next_Mission26;
	Parms.MissionK2Node_MissionRefEvent_Unlocks25 = MissionK2Node_MissionRefEvent_Unlocks25;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission25 = MissionK2Node_MissionRefEvent_Next_Mission25;
	Parms.MissionK2Node_MissionRefEvent_Unlocks24 = MissionK2Node_MissionRefEvent_Unlocks24;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission24 = MissionK2Node_MissionRefEvent_Next_Mission24;
	Parms.MissionK2Node_MissionRefEvent_Unlocks23 = MissionK2Node_MissionRefEvent_Unlocks23;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission23 = MissionK2Node_MissionRefEvent_Next_Mission23;
	Parms.MissionK2Node_MissionRefEvent_Unlocks22 = MissionK2Node_MissionRefEvent_Unlocks22;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission22 = MissionK2Node_MissionRefEvent_Next_Mission22;
	Parms.MissionK2Node_MissionRefEvent_Unlocks21 = MissionK2Node_MissionRefEvent_Unlocks21;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission21 = MissionK2Node_MissionRefEvent_Next_Mission21;
	Parms.MissionK2Node_MissionRefEvent_Unlocks20 = MissionK2Node_MissionRefEvent_Unlocks20;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission20 = MissionK2Node_MissionRefEvent_Next_Mission20;
	Parms.MissionK2Node_MissionRefEvent_Unlocks19 = MissionK2Node_MissionRefEvent_Unlocks19;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission19 = MissionK2Node_MissionRefEvent_Next_Mission19;
	Parms.MissionK2Node_MissionRefEvent_Unlocks58 = MissionK2Node_MissionRefEvent_Unlocks58;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission58 = MissionK2Node_MissionRefEvent_Next_Mission58;
	Parms.MissionK2Node_MissionRefEvent_Unlocks59 = MissionK2Node_MissionRefEvent_Unlocks59;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission59 = MissionK2Node_MissionRefEvent_Next_Mission59;
	Parms.MissionK2Node_MissionRefEvent_Unlocks18 = MissionK2Node_MissionRefEvent_Unlocks18;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission18 = MissionK2Node_MissionRefEvent_Next_Mission18;
	Parms.MissionK2Node_MissionRefEvent_Unlocks17 = MissionK2Node_MissionRefEvent_Unlocks17;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission17 = MissionK2Node_MissionRefEvent_Next_Mission17;
	Parms.MissionK2Node_MissionRefEvent_Unlocks16 = MissionK2Node_MissionRefEvent_Unlocks16;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission16 = MissionK2Node_MissionRefEvent_Next_Mission16;
	Parms.MissionK2Node_MissionRefEvent_Unlocks15 = MissionK2Node_MissionRefEvent_Unlocks15;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission15 = MissionK2Node_MissionRefEvent_Next_Mission15;
	Parms.MissionK2Node_MissionRefEvent_Unlocks14 = MissionK2Node_MissionRefEvent_Unlocks14;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission14 = MissionK2Node_MissionRefEvent_Next_Mission14;
	Parms.MissionK2Node_MissionRefEvent_Unlocks13 = MissionK2Node_MissionRefEvent_Unlocks13;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission13 = MissionK2Node_MissionRefEvent_Next_Mission13;
	Parms.MissionK2Node_MissionRefEvent_Unlocks12 = MissionK2Node_MissionRefEvent_Unlocks12;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission12 = MissionK2Node_MissionRefEvent_Next_Mission12;
	Parms.MissionK2Node_MissionRefEvent_Unlocks11 = MissionK2Node_MissionRefEvent_Unlocks11;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission11 = MissionK2Node_MissionRefEvent_Next_Mission11;
	Parms.MissionK2Node_MissionRefEvent_Unlocks10 = MissionK2Node_MissionRefEvent_Unlocks10;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission10 = MissionK2Node_MissionRefEvent_Next_Mission10;
	Parms.MissionK2Node_MissionRefEvent_Unlocks9 = MissionK2Node_MissionRefEvent_Unlocks9;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission9 = MissionK2Node_MissionRefEvent_Next_Mission9;
	Parms.MissionK2Node_MissionRefEvent_Unlocks8 = MissionK2Node_MissionRefEvent_Unlocks8;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission8 = MissionK2Node_MissionRefEvent_Next_Mission8;
	Parms.MissionK2Node_MissionRefEvent_Unlocks7 = MissionK2Node_MissionRefEvent_Unlocks7;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission7 = MissionK2Node_MissionRefEvent_Next_Mission7;
	Parms.MissionK2Node_MissionRefEvent_Unlocks6 = MissionK2Node_MissionRefEvent_Unlocks6;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission6 = MissionK2Node_MissionRefEvent_Next_Mission6;
	Parms.MissionK2Node_MissionRefEvent_Unlocks5 = MissionK2Node_MissionRefEvent_Unlocks5;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission5 = MissionK2Node_MissionRefEvent_Next_Mission5;
	Parms.MissionK2Node_MissionRefEvent_Unlocks4 = MissionK2Node_MissionRefEvent_Unlocks4;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission4 = MissionK2Node_MissionRefEvent_Next_Mission4;
	Parms.MissionK2Node_MissionRefEvent_Unlocks3 = MissionK2Node_MissionRefEvent_Unlocks3;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission3 = MissionK2Node_MissionRefEvent_Next_Mission3;
	Parms.MissionK2Node_MissionRefEvent_Unlocks2 = MissionK2Node_MissionRefEvent_Unlocks2;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission2 = MissionK2Node_MissionRefEvent_Next_Mission2;
	Parms.MissionK2Node_MissionRefEvent_Unlocks60 = MissionK2Node_MissionRefEvent_Unlocks60;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission60 = MissionK2Node_MissionRefEvent_Next_Mission60;
	Parms.MissionK2Node_MissionRefEvent_Unlocks1 = MissionK2Node_MissionRefEvent_Unlocks1;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission1 = MissionK2Node_MissionRefEvent_Next_Mission1;
	Parms.MissionK2Node_MissionRefEvent_Unlocks = MissionK2Node_MissionRefEvent_Unlocks;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission = MissionK2Node_MissionRefEvent_Next_Mission;
	Parms.MissionK2Node_MissionRefEvent_Unlocks61 = MissionK2Node_MissionRefEvent_Unlocks61;
	Parms.MissionK2Node_MissionRefEvent_Next_Mission61 = MissionK2Node_MissionRefEvent_Next_Mission61;

	UObject::ProcessEvent(Func, &Parms);

}

}


