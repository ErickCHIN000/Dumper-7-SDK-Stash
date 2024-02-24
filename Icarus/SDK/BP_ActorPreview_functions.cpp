#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActorPreview.BP_ActorPreview_C
// (Actor)

class UClass* ABP_ActorPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActorPreview_C");

	return Clss;
}


// BP_ActorPreview_C BP_ActorPreview.Default__BP_ActorPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ActorPreview_C* ABP_ActorPreview_C::GetDefaultObj()
{
	static class ABP_ActorPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ActorPreview_C*>(ABP_ActorPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActorPreview.BP_ActorPreview_C.GetLightComponents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ULightComponent*>     SceneCaptureLights                                               (Parm, OutParm, ContainsInstancedReference)
// TArray<class ULightComponent*>     CameraComponentLights                                            (Parm, OutParm, ContainsInstancedReference)

void ABP_ActorPreview_C::GetLightComponents(TArray<class ULightComponent*>* SceneCaptureLights, TArray<class ULightComponent*>* CameraComponentLights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "GetLightComponents");

	Params::ABP_ActorPreview_C_GetLightComponents_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SceneCaptureLights != nullptr)
		*SceneCaptureLights = std::move(Parms.SceneCaptureLights);

	if (CameraComponentLights != nullptr)
		*CameraComponentLights = std::move(Parms.CameraComponentLights);

}


// Function BP_ActorPreview.BP_ActorPreview_C.UpdateCaptureMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseSceneCapture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseCameraComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActorPreview_C::UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "UpdateCaptureMode");

	Params::ABP_ActorPreview_C_UpdateCaptureMode_Params Parms{};

	Parms.UseSceneCapture = UseSceneCapture;
	Parms.UseCameraComponent = UseCameraComponent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActorPreview.BP_ActorPreview_C.GetShowOnlyComponents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> OutComponents                                                    (Parm, OutParm, ContainsInstancedReference)

void ABP_ActorPreview_C::GetShowOnlyComponents(TArray<class UPrimitiveComponent*>* OutComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "GetShowOnlyComponents");

	Params::ABP_ActorPreview_C_GetShowOnlyComponents_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutComponents != nullptr)
		*OutComponents = std::move(Parms.OutComponents);

}


// Function BP_ActorPreview.BP_ActorPreview_C.CreateRenderTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorPreview_C::CreateRenderTarget(int32 Width, int32 Height, class UTextureRenderTarget2D** RenderTarget, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "CreateRenderTarget");

	Params::ABP_ActorPreview_C_CreateRenderTarget_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;

}


// Function BP_ActorPreview.BP_ActorPreview_C.ResolveVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActorPreview_C::ResolveVisibility(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ResolveVisibility");

	Params::ABP_ActorPreview_C_ResolveVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function BP_ActorPreview.BP_ActorPreview_C.UpdatePreviewVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActorPreview_C::UpdatePreviewVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "UpdatePreviewVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActorPreview.BP_ActorPreview_C.SetPreviewVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewPreviewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActorPreview_C::SetPreviewVisibility(bool NewPreviewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "SetPreviewVisibility");

	Params::ABP_ActorPreview_C_SetPreviewVisibility_Params Parms{};

	Parms.NewPreviewVisibility = NewPreviewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActorPreview.BP_ActorPreview_C.ClearCurrentMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ActorPreview_C::ClearCurrentMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ClearCurrentMeshes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActorPreview.BP_ActorPreview_C.ConstructPreviewMeshArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMesh*>       MeshArray                                                        (Parm, OutParm)
// TArray<class USkeletalMesh*>       Meshes                                                           (Edit, BlueprintVisible)

void ABP_ActorPreview_C::ConstructPreviewMeshArray(TArray<class USkeletalMesh*>* MeshArray, const TArray<class USkeletalMesh*>& Meshes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ConstructPreviewMeshArray");

	Params::ABP_ActorPreview_C_ConstructPreviewMeshArray_Params Parms{};

	Parms.Meshes = Meshes;

	UObject::ProcessEvent(Func, &Parms);

	if (MeshArray != nullptr)
		*MeshArray = std::move(Parms.MeshArray);

}


// Function BP_ActorPreview.BP_ActorPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ActorPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActorPreview.BP_ActorPreview_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorPreview_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ReceiveTick");

	Params::ABP_ActorPreview_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActorPreview.BP_ActorPreview_C.UpdateActorPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActorPreview_C::UpdateActorPreview(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "UpdateActorPreview");

	Params::ABP_ActorPreview_C_UpdateActorPreview_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActorPreview.BP_ActorPreview_C.ExecuteUbergraph_BP_ActorPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ResolveVisibility_Visible                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ActorPreview_C::ExecuteUbergraph_BP_ActorPreview(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_Visible, bool CallFunc_ResolveVisibility_Visible, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActorPreview_C", "ExecuteUbergraph_BP_ActorPreview");

	Params::ABP_ActorPreview_C_ExecuteUbergraph_BP_ActorPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.CallFunc_ResolveVisibility_Visible = CallFunc_ResolveVisibility_Visible;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


