#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C
// (Actor)

class UClass* ABP_SkeletalItem_Wood_Rag_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Wood_Rag_Torch_C");

	return Clss;
}


// BP_SkeletalItem_Wood_Rag_Torch_C BP_SkeletalItem_Wood_Rag_Torch.Default__BP_SkeletalItem_Wood_Rag_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Wood_Rag_Torch_C* ABP_SkeletalItem_Wood_Rag_Torch_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Wood_Rag_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Wood_Rag_Torch_C*>(ABP_SkeletalItem_Wood_Rag_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Wood_Rag_Torch_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Rag_Torch_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Wood_Rag_Torch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Rag_Torch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C.SetItemVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Wood_Rag_Torch_C::SetItemVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Rag_Torch_C", "SetItemVisible");

	Params::ABP_SkeletalItem_Wood_Rag_Torch_C_SetItemVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C.LightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Wood_Rag_Torch_C::LightUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Rag_Torch_C", "LightUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C.ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLit_Lit                                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Wood_Rag_Torch_C::ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch(int32 EntryPoint, bool K2Node_Event_bVisible, bool CallFunc_IsLit_Lit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Wood_Rag_Torch_C", "ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch");

	Params::ABP_SkeletalItem_Wood_Rag_Torch_C_ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.CallFunc_IsLit_Lit = CallFunc_IsLit_Lit;

	UObject::ProcessEvent(Func, &Parms);

}

}


