#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_DEV_Pyromancy_Flame.BP_SkeletalItem_DEV_Pyromancy_Flame_C
// (Actor)

class UClass* ABP_SkeletalItem_DEV_Pyromancy_Flame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_DEV_Pyromancy_Flame_C");

	return Clss;
}


// BP_SkeletalItem_DEV_Pyromancy_Flame_C BP_SkeletalItem_DEV_Pyromancy_Flame.Default__BP_SkeletalItem_DEV_Pyromancy_Flame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_DEV_Pyromancy_Flame_C* ABP_SkeletalItem_DEV_Pyromancy_Flame_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_DEV_Pyromancy_Flame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_DEV_Pyromancy_Flame_C*>(ABP_SkeletalItem_DEV_Pyromancy_Flame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_DEV_Pyromancy_Flame.BP_SkeletalItem_DEV_Pyromancy_Flame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_DEV_Pyromancy_Flame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_DEV_Pyromancy_Flame_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_DEV_Pyromancy_Flame.BP_SkeletalItem_DEV_Pyromancy_Flame_C.ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_DEV_Pyromancy_Flame_C::ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_DEV_Pyromancy_Flame_C", "ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame");

	Params::ABP_SkeletalItem_DEV_Pyromancy_Flame_C_ExecuteUbergraph_BP_SkeletalItem_DEV_Pyromancy_Flame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


