#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Fidget_v1.A_Hydra_Fidget_v1_C
// (None)

class UClass* UA_Hydra_Fidget_v1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Fidget_v1_C");

	return Clss;
}


// A_Hydra_Fidget_v1_C A_Hydra_Fidget_v1.Default__A_Hydra_Fidget_v1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Fidget_v1_C* UA_Hydra_Fidget_v1_C::GetDefaultObj()
{
	static class UA_Hydra_Fidget_v1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Fidget_v1_C*>(UA_Hydra_Fidget_v1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_Hydra_Fidget_v1.A_Hydra_Fidget_v1_C.HydraSpawnAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_Hydra_Fidget_v1_C::HydraSpawnAmmo(enum class EHydraHeads Head)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Fidget_v1_C", "HydraSpawnAmmo");

	Params::UA_Hydra_Fidget_v1_C_HydraSpawnAmmo_Params Parms{};

	Parms.Head = Head;

	UObject::ProcessEvent(Func, &Parms);

}


// Function A_Hydra_Fidget_v1.A_Hydra_Fidget_v1_C.AN_SpawnAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_Fidget_v1_C::AN_SpawnAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Fidget_v1_C", "AN_SpawnAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_Fidget_v1.A_Hydra_Fidget_v1_C.ExecuteUbergraph_A_Hydra_Fidget_v1
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SpellActor_Hydra_C>K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHydraHeads             K2Node_CustomEvent_Head                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHydraHeads             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnDroppedPickupLootRequestK2Node_MakeStruct_SpawnDroppedPickupLootRequest                  (ContainsInstancedReference)
// int32                              CallFunc_SpawnLootAsync_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_Hydra_Fidget_v1_C::ExecuteUbergraph_A_Hydra_Fidget_v1(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class FName Temp_name_Variable, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, enum class EHydraHeads K2Node_CustomEvent_Head, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EHydraHeads Temp_byte_Variable, class FName K2Node_Select_Default, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, int32 CallFunc_SpawnLootAsync_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Fidget_v1_C", "ExecuteUbergraph_A_Hydra_Fidget_v1");

	Params::UA_Hydra_Fidget_v1_C_ExecuteUbergraph_A_Hydra_Fidget_v1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra = K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SpawnDroppedPickupLootRequest = K2Node_MakeStruct_SpawnDroppedPickupLootRequest;
	Parms.CallFunc_SpawnLootAsync_ReturnValue = CallFunc_SpawnLootAsync_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


