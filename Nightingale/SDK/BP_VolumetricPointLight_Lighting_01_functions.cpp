#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C
// (Actor)

class UClass* ABP_VolumetricPointLight_Lighting_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VolumetricPointLight_Lighting_01_C");

	return Clss;
}


// BP_VolumetricPointLight_Lighting_01_C BP_VolumetricPointLight_Lighting_01.Default__BP_VolumetricPointLight_Lighting_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VolumetricPointLight_Lighting_01_C* ABP_VolumetricPointLight_Lighting_01_C::GetDefaultObj()
{
	static class ABP_VolumetricPointLight_Lighting_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VolumetricPointLight_Lighting_01_C*>(ABP_VolumetricPointLight_Lighting_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_VolumetricPointLight_Lighting_01_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_VolumetricPointLight_Lighting_01_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VolumetricPointLight_Lighting_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolumetricPointLight_Lighting_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "ReceiveTick");

	Params::ABP_VolumetricPointLight_Lighting_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.Volume_Light_Play_Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VolumetricPointLight_Lighting_01_C::Volume_Light_Play_Timeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "Volume_Light_Play_Timeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VolumetricPointLight_Lighting_01.BP_VolumetricPointLight_Lighting_01_C.ExecuteUbergraph_BP_VolumetricPointLight_Lighting_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolumetricPointLight_Lighting_01_C::ExecuteUbergraph_BP_VolumetricPointLight_Lighting_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VolumetricPointLight_Lighting_01_C", "ExecuteUbergraph_BP_VolumetricPointLight_Lighting_01");

	Params::ABP_VolumetricPointLight_Lighting_01_C_ExecuteUbergraph_BP_VolumetricPointLight_Lighting_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


