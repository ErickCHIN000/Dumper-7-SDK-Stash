#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IT_ItemSnapCaptor.IT_ItemSnapCaptor_C
// (None)

class UClass* IIT_ItemSnapCaptor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IT_ItemSnapCaptor_C");

	return Clss;
}


// IT_ItemSnapCaptor_C IT_ItemSnapCaptor.Default__IT_ItemSnapCaptor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIT_ItemSnapCaptor_C* IIT_ItemSnapCaptor_C::GetDefaultObj()
{
	static class IIT_ItemSnapCaptor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIT_ItemSnapCaptor_C*>(IIT_ItemSnapCaptor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.InspectorGetPrimitiveComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Comp                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::InspectorGetPrimitiveComponent(class AActor* Actor, class UPrimitiveComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "InspectorGetPrimitiveComponent");

	Params::IIT_ItemSnapCaptor_C_InspectorGetPrimitiveComponent_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetItemInspectInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemInspectInfo          Info                                                             (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::GetItemInspectInfo(class FName ItemId, struct FS_ItemInspectInfo* Info, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "GetItemInspectInfo");

	Params::IIT_ItemSnapCaptor_C_GetItemInspectInfo_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetLocalAttachmentByID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachmentType         Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Class                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::GetLocalAttachmentByID(class FName ItemId, bool* Found, class FName* Socket, enum class EAttachmentType* Type, class UClass** Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "GetLocalAttachmentByID");

	Params::IIT_ItemSnapCaptor_C_GetLocalAttachmentByID_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Socket != nullptr)
		*Socket = Parms.Socket;

	if (Type != nullptr)
		*Type = Parms.Type;

	if (Class != nullptr)
		*Class = Parms.Class;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.SpawnSnapshotCaptor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_ItemInspector_C*         InspectorRef                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::SpawnSnapshotCaptor(class UJSI_Slot_C* ItemRef, class ABP_ItemInspector_C** InspectorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "SpawnSnapshotCaptor");

	Params::IIT_ItemSnapCaptor_C_SpawnSnapshotCaptor_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

	if (InspectorRef != nullptr)
		*InspectorRef = Parms.InspectorRef;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateSnapCustom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 JigItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::UpdateSnapCustom(const struct FVector& Location, const struct FRotator& Rotation, double FOV, class UJSI_Slot_C* JigItem, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "UpdateSnapCustom");

	Params::IIT_ItemSnapCaptor_C_UpdateSnapCustom_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.FOV = FOV;
	Parms.JigItem = JigItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.AddItemToQueue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::AddItemToQueue(class UJSI_Slot_C* Item, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "AddItemToQueue");

	Params::IIT_ItemSnapCaptor_C_AddItemToQueue_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateAttachments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      RenderT                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Attachments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTextureRenderTarget*        RenderTarget                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::UpdateAttachments(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, TArray<class FName>& Attachments, class UTextureRenderTarget** RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "UpdateAttachments");

	Params::IIT_ItemSnapCaptor_C_UpdateAttachments_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.RenderT = RenderT;
	Parms.Attachments = Attachments;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateSnap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      RenderT                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget*        RenderTarget                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::UpdateSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, class UTextureRenderTarget** RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "UpdateSnap");

	Params::IIT_ItemSnapCaptor_C_UpdateSnap_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.RenderT = RenderT;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;

}


// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetSnap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIT_ItemSnapCaptor_C::GetSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IT_ItemSnapCaptor_C", "GetSnap");

	Params::IIT_ItemSnapCaptor_C_GetSnap_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}

}


