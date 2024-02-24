#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Meteor_DRains.SpellActor_Meteor_DRains_C
// (Actor)

class UClass* ASpellActor_Meteor_DRains_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Meteor_DRains_C");

	return Clss;
}


// SpellActor_Meteor_DRains_C SpellActor_Meteor_DRains.Default__SpellActor_Meteor_DRains_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Meteor_DRains_C* ASpellActor_Meteor_DRains_C::GetDefaultObj()
{
	static class ASpellActor_Meteor_DRains_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Meteor_DRains_C*>(ASpellActor_Meteor_DRains_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Meteor_DRains.SpellActor_Meteor_DRains_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_DRains_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_DRains_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_DRains.SpellActor_Meteor_DRains_C.TrySpawnMeteor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_DRains_C::TrySpawnMeteor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_DRains_C", "TrySpawnMeteor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_DRains.SpellActor_Meteor_DRains_C.ExecuteUbergraph_SpellActor_Meteor_DRains
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// struct FSpellLightProjectileInitializationDataK2Node_MakeStruct_SpellLightProjectileInitializationData         (ContainsInstancedReference)

void ASpellActor_Meteor_DRains_C::ExecuteUbergraph_SpellActor_Meteor_DRains(int32 EntryPoint, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* K2Node_Select_Default, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_DRains_C", "ExecuteUbergraph_SpellActor_Meteor_DRains");

	Params::ASpellActor_Meteor_DRains_C_ExecuteUbergraph_SpellActor_Meteor_DRains_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.K2Node_MakeStruct_SpellLightProjectileInitializationData = K2Node_MakeStruct_SpellLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


