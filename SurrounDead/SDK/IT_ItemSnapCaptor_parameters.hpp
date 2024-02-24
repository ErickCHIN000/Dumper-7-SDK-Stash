#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.InspectorGetPrimitiveComponent
struct IIT_ItemSnapCaptor_C_InspectorGetPrimitiveComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Comp;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetItemInspectInfo
struct IIT_ItemSnapCaptor_C_GetItemInspectInfo_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemInspectInfo                    Info;                                              // 0x8(0x8C)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3EF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Found;                                             // 0x98(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetLocalAttachmentByID
struct IIT_ItemSnapCaptor_C_GetLocalAttachmentByID_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentType                   Type;                                              // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Class;                                             // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.SpawnSnapshotCaptor
struct IIT_ItemSnapCaptor_C_SpawnSnapshotCaptor_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemInspector_C*                   InspectorRef;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateSnapCustom
struct IIT_ItemSnapCaptor_C_UpdateSnapCustom_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       FOV;                                               // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJSI_Slot_C*                           JigItem;                                           // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.AddItemToQueue
struct IIT_ItemSnapCaptor_C_AddItemToQueue_Params
{
public:
	class UJSI_Slot_C*                           Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateAttachments
struct IIT_ItemSnapCaptor_C_UpdateAttachments_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderT;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Attachments;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextureRenderTarget*                  RenderTarget;                                      // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.UpdateSnap
struct IIT_ItemSnapCaptor_C_UpdateSnap_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderT;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget*                  RenderTarget;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IT_ItemSnapCaptor.IT_ItemSnapCaptor_C.GetSnap
struct IIT_ItemSnapCaptor_C_GetSnap_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Texture;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


