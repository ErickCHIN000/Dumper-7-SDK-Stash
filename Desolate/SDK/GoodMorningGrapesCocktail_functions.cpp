#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GoodMorningGrapesCocktail.GoodMorningGrapesCocktail_C
// (Actor)

class UClass* AGoodMorningGrapesCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GoodMorningGrapesCocktail_C");

	return Clss;
}


// GoodMorningGrapesCocktail_C GoodMorningGrapesCocktail.Default__GoodMorningGrapesCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGoodMorningGrapesCocktail_C* AGoodMorningGrapesCocktail_C::GetDefaultObj()
{
	static class AGoodMorningGrapesCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGoodMorningGrapesCocktail_C*>(AGoodMorningGrapesCocktail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GoodMorningGrapesCocktail.GoodMorningGrapesCocktail_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGoodMorningGrapesCocktail_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoodMorningGrapesCocktail_C", "OnUse");

	Params::AGoodMorningGrapesCocktail_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GoodMorningGrapesCocktail.GoodMorningGrapesCocktail_C.ExecuteUbergraph_GoodMorningGrapesCocktail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGoodMorningGrapesCocktail_C::ExecuteUbergraph_GoodMorningGrapesCocktail(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GoodMorningGrapesCocktail_C", "ExecuteUbergraph_GoodMorningGrapesCocktail");

	Params::AGoodMorningGrapesCocktail_C_ExecuteUbergraph_GoodMorningGrapesCocktail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


