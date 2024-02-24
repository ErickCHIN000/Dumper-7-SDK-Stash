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

// 0x20 (0x20 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.GetLightComponents
struct ABP_ActorPreview_C_GetLightComponents_Params
{
public:
	TArray<class ULightComponent*>               SceneCaptureLights;                                // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class ULightComponent*>               CameraComponentLights;                             // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x31 (0x31 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.UpdateCaptureMode
struct ABP_ActorPreview_C_UpdateCaptureMode_Params
{
public:
	bool                                         UseSceneCapture;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseCameraComponent;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3457[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.GetShowOnlyComponents
struct ABP_ActorPreview_C_GetShowOnlyComponents_Params
{
public:
	TArray<class UPrimitiveComponent*>           OutComponents;                                     // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.CreateRenderTarget
struct ABP_ActorPreview_C_CreateRenderTarget_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Height;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.ResolveVisibility
struct ABP_ActorPreview_C_ResolveVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.SetPreviewVisibility
struct ABP_ActorPreview_C_SetPreviewVisibility_Params
{
public:
	bool                                         NewPreviewVisibility;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.ConstructPreviewMeshArray
struct ABP_ActorPreview_C_ConstructPreviewMeshArray_Params
{
public:
	TArray<class USkeletalMesh*>                 MeshArray;                                         // 0x0(0x10)(Parm, OutParm)
	TArray<class USkeletalMesh*>                 Meshes;                                            // 0x10(0x10)(Edit, BlueprintVisible)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.ReceiveTick
struct ABP_ActorPreview_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.UpdateActorPreview
struct ABP_ActorPreview_C_UpdateActorPreview_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ActorPreview.BP_ActorPreview_C.ExecuteUbergraph_BP_ActorPreview
struct ABP_ActorPreview_C_ExecuteUbergraph_BP_ActorPreview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Visible;                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ResolveVisibility_Visible;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


