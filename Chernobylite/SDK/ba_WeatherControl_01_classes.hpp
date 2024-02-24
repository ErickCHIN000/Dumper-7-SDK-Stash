#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass ba_WeatherControl_01.ba_WeatherControl_01_C
class Aba_WeatherControl_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         _InicializeDone;                                   // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_134A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_DarkTime_01_C*                     DarkTime;                                          // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_WeatherControl_01_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Inicialize();
	void ExecuteUbergraph_ba_WeatherControl_01(int32 EntryPoint, class Aba_DarkTime_01_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


