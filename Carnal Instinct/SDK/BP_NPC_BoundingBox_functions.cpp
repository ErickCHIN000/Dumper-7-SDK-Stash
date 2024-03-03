#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_BoundingBox.BP_NPC_BoundingBox_C
// (Actor)

class UClass* ABP_NPC_BoundingBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_BoundingBox_C");

	return Clss;
}


// BP_NPC_BoundingBox_C BP_NPC_BoundingBox.Default__BP_NPC_BoundingBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_BoundingBox_C* ABP_NPC_BoundingBox_C::GetDefaultObj()
{
	static class ABP_NPC_BoundingBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_BoundingBox_C*>(ABP_NPC_BoundingBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_BoundingBox.BP_NPC_BoundingBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_BoundingBox_C::UserConstructionScript(const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_BoundingBox_C", "UserConstructionScript");

	Params::ABP_NPC_BoundingBox_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPC_BoundingBox.BP_NPC_BoundingBox_C.ExecuteUbergraph_BP_NPC_BoundingBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_BoundingBox_C::ExecuteUbergraph_BP_NPC_BoundingBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_BoundingBox_C", "ExecuteUbergraph_BP_NPC_BoundingBox");

	Params::ABP_NPC_BoundingBox_C_ExecuteUbergraph_BP_NPC_BoundingBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


