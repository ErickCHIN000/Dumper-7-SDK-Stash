#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C
// (Actor)

class UClass* ABP_Crop_Plot_Mound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Crop_Plot_Mound_C");

	return Clss;
}


// BP_Crop_Plot_Mound_C BP_Crop_Plot_Mound.Default__BP_Crop_Plot_Mound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Crop_Plot_Mound_C* ABP_Crop_Plot_Mound_C::GetDefaultObj()
{
	static class ABP_Crop_Plot_Mound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Crop_Plot_Mound_C*>(ABP_Crop_Plot_Mound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C.SetSoilState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWet                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Crop_Plot_Mound_C::SetSoilState(bool bWet, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Crop_Plot_Mound_C", "SetSoilState");

	Params::ABP_Crop_Plot_Mound_C_SetSoilState_Params Parms{};

	Parms.bWet = bWet;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C.HarvestResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        StaticMeshComponent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUsingSickle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Harvested                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HarvestResource_Harvested                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Crop_Plot_Mound_C::HarvestResource(class AIcarusPlayerCharacter* PlayerCharacter, class UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, bool* Harvested, bool CallFunc_HarvestResource_Harvested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Crop_Plot_Mound_C", "HarvestResource");

	Params::ABP_Crop_Plot_Mound_C_HarvestResource_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.bUsingSickle = bUsingSickle;
	Parms.CallFunc_HarvestResource_Harvested = CallFunc_HarvestResource_Harvested;

	UObject::ProcessEvent(Func, &Parms);

	if (Harvested != nullptr)
		*Harvested = Parms.Harvested;

}


// Function BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Crop_Plot_Mound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Crop_Plot_Mound_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Crop_Plot_Mound_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Crop_Plot_Mound_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C.ExecuteUbergraph_BP_Crop_Plot_Mound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Crop_Plot_Mound_C::ExecuteUbergraph_BP_Crop_Plot_Mound(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Crop_Plot_Mound_C", "ExecuteUbergraph_BP_Crop_Plot_Mound");

	Params::ABP_Crop_Plot_Mound_C_ExecuteUbergraph_BP_Crop_Plot_Mound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


