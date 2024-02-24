#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Painting_Base.BP_Painting_Base_C
// (Actor)

class UClass* ABP_Painting_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Painting_Base_C");

	return Clss;
}


// BP_Painting_Base_C BP_Painting_Base.Default__BP_Painting_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Painting_Base_C* ABP_Painting_Base_C::GetDefaultObj()
{
	static class ABP_Painting_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Painting_Base_C*>(ABP_Painting_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Painting_Base.BP_Painting_Base_C.GetPaintingImageRow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintingsRowHandle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FPaintingsRowHandle ABP_Painting_Base_C::GetPaintingImageRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "GetPaintingImageRow");

	Params::ABP_Painting_Base_C_GetPaintingImageRow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Painting_Base.BP_Painting_Base_C.OnRep_PaintingRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Painting_Display_C*     K2Node_DynamicCast_AsUMG_Painting_Display                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Painting_Base_C::OnRep_PaintingRow(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_Painting_Display_C* K2Node_DynamicCast_AsUMG_Painting_Display, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "OnRep_PaintingRow");

	Params::ABP_Painting_Base_C_OnRep_PaintingRow_Params Parms{};

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Painting_Display = K2Node_DynamicCast_AsUMG_Painting_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Painting_Base.BP_Painting_Base_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Painting_Base_C::Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "Deployable_Interact");

	Params::ABP_Painting_Base_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Painting_Base.BP_Painting_Base_C.UpdateImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPaintingsRowHandle         PaintingRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Painting_Base_C::UpdateImage(const struct FPaintingsRowHandle& PaintingRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "UpdateImage");

	Params::ABP_Painting_Base_C_UpdateImage_Params Parms{};

	Parms.PaintingRow = PaintingRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Painting_Base.BP_Painting_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Painting_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Painting_Base.BP_Painting_Base_C.SetPaintingImage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPaintingsRowHandle         PaintingRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Painting_Base_C::SetPaintingImage(struct FPaintingsRowHandle& PaintingRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "SetPaintingImage");

	Params::ABP_Painting_Base_C_SetPaintingImage_Params Parms{};

	Parms.PaintingRow = PaintingRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Painting_Base.BP_Painting_Base_C.ExecuteUbergraph_BP_Painting_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPaintingsRowHandle         K2Node_CustomEvent_PaintingRow                                   (NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPaintingsRowHandle         K2Node_Event_PaintingRow                                         (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UUMG_Painting_Display_C*     K2Node_DynamicCast_AsUMG_Painting_Display                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Painting_Base_C::ExecuteUbergraph_BP_Painting_Base(int32 EntryPoint, const struct FPaintingsRowHandle& K2Node_CustomEvent_PaintingRow, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, const struct FPaintingsRowHandle& K2Node_Event_PaintingRow, class UUMG_Painting_Display_C* K2Node_DynamicCast_AsUMG_Painting_Display, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Base_C", "ExecuteUbergraph_BP_Painting_Base");

	Params::ABP_Painting_Base_C_ExecuteUbergraph_BP_Painting_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PaintingRow = K2Node_CustomEvent_PaintingRow;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_Event_PaintingRow = K2Node_Event_PaintingRow;
	Parms.K2Node_DynamicCast_AsUMG_Painting_Display = K2Node_DynamicCast_AsUMG_Painting_Display;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


