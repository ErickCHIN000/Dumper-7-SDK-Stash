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

// 0x8 (0x8 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_OnMontageNotify
struct IBP_WeaponAttachments_C_Jig_OnMontageNotify_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetPendingMag
struct IBP_WeaponAttachments_C_Jig_GetPendingMag_Params
{
public:
	bool                                         FindMagIfNoPending_;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AMainLocalAttachment_C*            MagRef;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_SetPendindMag
struct IBP_WeaponAttachments_C_Jig_SetPendindMag_Params
{
public:
	class ABP_AMainLocalAttachment_C*            MagRef;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetAttachmentByType
struct IBP_WeaponAttachments_C_Jig_GetAttachmentByType_Params
{
public:
	enum class EAttachmentType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ACE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AMainLocalAttachment_C*            Attachment;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_SetAttachmentInfo
struct IBP_WeaponAttachments_C_Jig_SetAttachmentInfo_Params
{
public:
	int32                                        UID;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLocalAttachmentInfo                  AttachmentInfo;                                    // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetAttachmentInfo
struct IBP_WeaponAttachments_C_Jig_GetAttachmentInfo_Params
{
public:
	int32                                        UID;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLocalAttachmentInfo                  AttachmentInfo;                                    // 0x8(0x38)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_CanChamberWeapon
struct IBP_WeaponAttachments_C_Jig_CanChamberWeapon_Params
{
public:
	class UBP_JigMultiplayer_C*                  MPComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerSlots                      PlayerSlots;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_ExecuteChamberWeapon
struct IBP_WeaponAttachments_C_Jig_ExecuteChamberWeapon_Params
{
public:
	class UBP_JigMultiplayer_C*                  MPComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerSlots                      PlayerSlots;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B44[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ChamberMontage;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetEquipMontage
struct IBP_WeaponAttachments_C_Jig_GetEquipMontage_Params
{
public:
	bool                                         CanChamber_;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          EquipMontage;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_StartReloading
struct IBP_WeaponAttachments_C_Jig_StartReloading_Params
{
public:
	class UBP_JigMultiplayer_C*                  MPCom;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UJSIContainer_C*                       MagContainer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_CheckCanReload
struct IBP_WeaponAttachments_C_Jig_CheckCanReload_Params
{
public:
	class UBP_JigMultiplayer_C*                  MPComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerSlots                      PlayerSlots;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BB3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSIContainer_C*                       ContainerMag;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReloadMontage;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HasInternalMag;                                    // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanChamber_;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BBC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSI_Slot_C*                           ReloadWith;                                        // 0x28(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LoopReloadAnim;                                    // 0x30(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetPrimitiveComponent
struct IBP_WeaponAttachments_C_Jig_GetPrimitiveComponent_Params
{
public:
	class UPrimitiveComponent*                   Comp;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_GetADSSocketLocation
struct IBP_WeaponAttachments_C_Jig_GetADSSocketLocation_Params
{
public:
	struct FVector                               SocketLoc;                                         // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SocketFound;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_AttachmentRemoved
struct IBP_WeaponAttachments_C_Jig_AttachmentRemoved_Params
{
public:
	TArray<struct FS_RepAttachmentInfo>          Attachments;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentType                   AttachmentType;                                    // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_WeaponAttachments.BP_WeaponAttachments_C.Jig_AttachmentInstalled
struct IBP_WeaponAttachments_C_Jig_AttachmentInstalled_Params
{
public:
	int32                                        MainUID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_RepAttachmentInfo>          Attachments;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentType                   AttachmentType;                                    // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


