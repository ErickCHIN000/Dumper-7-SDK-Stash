#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CardPreview.BP_CardPreview_C
// (Actor)

class UClass* ABP_CardPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CardPreview_C");

	return Clss;
}


// BP_CardPreview_C BP_CardPreview.Default__BP_CardPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CardPreview_C* ABP_CardPreview_C::GetDefaultObj()
{
	static class ABP_CardPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CardPreview_C*>(ABP_CardPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CardPreview.BP_CardPreview_C.SetCardRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CardPreview_C::SetCardRotation(const struct FRotator& Rotation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CardPreview_C", "SetCardRotation");

	Params::ABP_CardPreview_C_SetCardRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CardPreview.BP_CardPreview_C.UpdateCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CardText_C*             K2Node_DynamicCast_AsUMG_Card_Text                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CardPreview_C::UpdateCard(class UMaterialInterface* Material, class FText Text, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUMG_CardText_C* K2Node_DynamicCast_AsUMG_Card_Text, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CardPreview_C", "UpdateCard");

	Params::ABP_CardPreview_C_UpdateCard_Params Parms{};

	Parms.Material = Material;
	Parms.Text = Text;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Card_Text = K2Node_DynamicCast_AsUMG_Card_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CardPreview.BP_CardPreview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CardPreview_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CardPreview_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CardPreview.BP_CardPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CardPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CardPreview_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CardPreview.BP_CardPreview_C.ExecuteUbergraph_BP_CardPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CardPreview_C::ExecuteUbergraph_BP_CardPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CardPreview_C", "ExecuteUbergraph_BP_CardPreview");

	Params::ABP_CardPreview_C_ExecuteUbergraph_BP_CardPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


