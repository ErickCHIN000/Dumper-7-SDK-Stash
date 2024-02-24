#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Eruption_Self_Mod_03.SpellActor_Eruption_Self_Mod_03_C
// (Actor)

class UClass* ASpellActor_Eruption_Self_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Eruption_Self_Mod_03_C");

	return Clss;
}


// SpellActor_Eruption_Self_Mod_03_C SpellActor_Eruption_Self_Mod_03.Default__SpellActor_Eruption_Self_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Eruption_Self_Mod_03_C* ASpellActor_Eruption_Self_Mod_03_C::GetDefaultObj()
{
	static class ASpellActor_Eruption_Self_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Eruption_Self_Mod_03_C*>(ASpellActor_Eruption_Self_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Eruption_Self_Mod_03.SpellActor_Eruption_Self_Mod_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Self_Mod_03_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Self_Mod_03_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Self_Mod_03.SpellActor_Eruption_Self_Mod_03_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Eruption_Self_Mod_03_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Self_Mod_03_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Eruption_Self_Mod_03.SpellActor_Eruption_Self_Mod_03_C.ExecuteUbergraph_SpellActor_Eruption_Self_Mod_03
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class USplatData*                  Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable2                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable3                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable4                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable5                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetSpellDamageType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Eruption_Self_Mod_03_C::ExecuteUbergraph_SpellActor_Eruption_Self_Mod_03(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EOakElementalType Temp_byte_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, class UClass* CallFunc_GetSpellDamageType_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, class USplatData* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Eruption_Self_Mod_03_C", "ExecuteUbergraph_SpellActor_Eruption_Self_Mod_03");

	Params::ASpellActor_Eruption_Self_Mod_03_C_ExecuteUbergraph_SpellActor_Eruption_Self_Mod_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.CallFunc_GetSpellDamageType_ReturnValue = CallFunc_GetSpellDamageType_ReturnValue;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


