#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2E1 - 0x2A0)
// BlueprintGeneratedClass Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C
class UClose_Thunder_Audio_Player_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Volume;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       LPF_Frequency;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Delay;                                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x2C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                UDW;                                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Allow_Spatialization;                              // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UClose_Thunder_Audio_Player_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Close_Thunder_Audio_Player(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_Get_Close_Thunder_Sound_Occlusion_Volume, double CallFunc_Get_Close_Thunder_Sound_Occlusion_LPF, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast, float CallFunc_SetLowPassFilterFrequency_InLowPassFilterFrequency_ImplicitCast);
};

}


