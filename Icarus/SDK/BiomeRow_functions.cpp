#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BiomeRow.BiomeRow_C
// (None)

class UClass* UBiomeRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BiomeRow_C");

	return Clss;
}


// BiomeRow_C BiomeRow.Default__BiomeRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBiomeRow_C* UBiomeRow_C::GetDefaultObj()
{
	static class UBiomeRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBiomeRow_C*>(UBiomeRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BiomeRow.BiomeRow_C.SetBiome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            New_Biome                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBiomeRow_C::SetBiome(const struct FBiomesRowHandle& New_Biome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BiomeRow_C", "SetBiome");

	Params::UBiomeRow_C_SetBiome_Params Parms{};

	Parms.New_Biome = New_Biome;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BiomeRow.BiomeRow_C.ExecuteUbergraph_BiomeRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            K2Node_CustomEvent_New_Biome                                     (NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBiomeRow_C::ExecuteUbergraph_BiomeRow(int32 EntryPoint, const struct FBiomesRowHandle& K2Node_CustomEvent_New_Biome, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BiomeRow_C", "ExecuteUbergraph_BiomeRow");

	Params::UBiomeRow_C_ExecuteUbergraph_BiomeRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_New_Biome = K2Node_CustomEvent_New_Biome;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


