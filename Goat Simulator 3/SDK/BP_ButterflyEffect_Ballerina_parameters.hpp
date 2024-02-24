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
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C
struct ABP_ButterflyEffect_Ballerina_C_OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C
struct ABP_ButterflyEffect_Ballerina_C_OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C
struct ABP_ButterflyEffect_Ballerina_C_OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C
struct ABP_ButterflyEffect_Ballerina_C_OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C
struct ABP_ButterflyEffect_Ballerina_C_OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ReceiveAnyDamage
struct ABP_ButterflyEffect_Ballerina_C_ReceiveAnyDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ReceiveEndPlay
struct ABP_ButterflyEffect_Ballerina_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature
struct ABP_ButterflyEffect_Ballerina_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
struct ABP_ButterflyEffect_Ballerina_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params
{
public:
	class UGGDynamicAssetHoldingComponent*       DynAssetComp;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ExecuteUbergraph_BP_ButterflyEffect_Ballerina
struct ABP_ButterflyEffect_Ballerina_C_ExecuteUbergraph_BP_ButterflyEffect_Ballerina_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Damage;                               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CEF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           K2Node_Event_DamageType;                           // 0xA8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_DynamicCast_AsGGGoat;                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D08[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CallFunc_GetLoadedAsset_ReturnValue;               // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D0F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp_1;         // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       K2Node_ComponentBoundEvent_DynAssetComp;           // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CallFunc_GetLoadedAsset_ReturnValue_1;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


