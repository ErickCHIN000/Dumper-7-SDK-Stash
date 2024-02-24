#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x6C - 0x38)
// BlueprintGeneratedClass CamShake_World.CamShake_World_C
class UCamShake_World_C : public UAnimNotify
{
public:
	class UClass*                                ShakeClass;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InnerRadius;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OuterRadius;                                       // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Falloff;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_616[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ForceFeedback;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackAttenuation*             ForceFeedbackAttenuation;                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceFeedbackIntensity;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCamShake_World_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
};

}


