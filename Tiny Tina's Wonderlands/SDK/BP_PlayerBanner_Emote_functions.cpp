#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C
// (Actor)

class UClass* ABP_PlayerBanner_Emote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerBanner_Emote_C");

	return Clss;
}


// BP_PlayerBanner_Emote_C BP_PlayerBanner_Emote.Default__BP_PlayerBanner_Emote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerBanner_Emote_C* ABP_PlayerBanner_Emote_C::GetDefaultObj()
{
	static class ABP_PlayerBanner_Emote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerBanner_Emote_C*>(ABP_PlayerBanner_Emote_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerBanner_Emote_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBanner_Emote_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerBanner_Emote_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBanner_Emote_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote
// (BlueprintEvent)
// Parameters:
// class UGbxCustomizationData*       Customization                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBanner_Emote_C::BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote(class UGbxCustomizationData* Customization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBanner_Emote_C", "BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote");

	Params::ABP_PlayerBanner_Emote_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote_Params Parms{};

	Parms.Customization = Customization;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C.ExecuteUbergraph_BP_PlayerBanner_Emote
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxCustomizationData*       K2Node_ComponentBoundEvent_Customization                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerBanner_Emote_C::ExecuteUbergraph_BP_PlayerBanner_Emote(int32 EntryPoint, class UGbxCustomizationData* K2Node_ComponentBoundEvent_Customization)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBanner_Emote_C", "ExecuteUbergraph_BP_PlayerBanner_Emote");

	Params::ABP_PlayerBanner_Emote_C_ExecuteUbergraph_BP_PlayerBanner_Emote_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Customization = K2Node_ComponentBoundEvent_Customization;

	UObject::ProcessEvent(Func, &Parms);

}

}


