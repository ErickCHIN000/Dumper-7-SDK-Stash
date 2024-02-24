#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Impact_Shared_Melee_Shove.GC_Impact_Shared_Melee_Shove_C
// (None)

class UClass* UGC_Impact_Shared_Melee_Shove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Impact_Shared_Melee_Shove_C");

	return Clss;
}


// GC_Impact_Shared_Melee_Shove_C GC_Impact_Shared_Melee_Shove.Default__GC_Impact_Shared_Melee_Shove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Impact_Shared_Melee_Shove_C* UGC_Impact_Shared_Melee_Shove_C::GetDefaultObj()
{
	static class UGC_Impact_Shared_Melee_Shove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Impact_Shared_Melee_Shove_C*>(UGC_Impact_Shared_Melee_Shove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Impact_Shared_Melee_Shove.GC_Impact_Shared_Melee_Shove_C.GetElementTagFromActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ElementalTag                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Melee_Shove_C::GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Melee_Shove_C", "GetElementTagFromActor");

	Params::UGC_Impact_Shared_Melee_Shove_C_GetElementTagFromActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (ElementalTag != nullptr)
		*ElementalTag = std::move(Parms.ElementalTag);

}


// Function GC_Impact_Shared_Melee_Shove.GC_Impact_Shared_Melee_Shove_C.Get Impact Tag
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UGC_Impact_Shared_Melee_Shove_C::Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Impact_Shared_Melee_Shove_C", "Get Impact Tag");

	Params::UGC_Impact_Shared_Melee_Shove_C_Get_Impact_Tag_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}

}


