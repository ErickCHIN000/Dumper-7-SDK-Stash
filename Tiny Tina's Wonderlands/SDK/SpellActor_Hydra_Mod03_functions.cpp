#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C
// (Actor)

class UClass* ASpellActor_Hydra_Mod03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Hydra_Mod03_C");

	return Clss;
}


// SpellActor_Hydra_Mod03_C SpellActor_Hydra_Mod03.Default__SpellActor_Hydra_Mod03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Hydra_Mod03_C* ASpellActor_Hydra_Mod03_C::GetDefaultObj()
{
	static class ASpellActor_Hydra_Mod03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Hydra_Mod03_C*>(ASpellActor_Hydra_Mod03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C.GetHydraFireLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Loc                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// enum class EHydraHeads             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Hydra_Mod03_C::GetHydraFireLocation(enum class EHydraHeads Head, struct FVector* Loc, struct FRotator* Rot, enum class EHydraHeads Temp_byte_Variable, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod03_C", "GetHydraFireLocation");

	Params::ASpellActor_Hydra_Mod03_C_GetHydraFireLocation_Params Parms{};

	Parms.Head = Head;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Loc != nullptr)
		*Loc = std::move(Parms.Loc);

	if (Rot != nullptr)
		*Rot = std::move(Parms.Rot);

}


// Function SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_Mod03_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod03_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_Mod03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod03_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C.ExecuteUbergraph_SpellActor_Hydra_Mod03
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Hydra_Mod03_C::ExecuteUbergraph_SpellActor_Hydra_Mod03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod03_C", "ExecuteUbergraph_SpellActor_Hydra_Mod03");

	Params::ASpellActor_Hydra_Mod03_C_ExecuteUbergraph_SpellActor_Hydra_Mod03_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


