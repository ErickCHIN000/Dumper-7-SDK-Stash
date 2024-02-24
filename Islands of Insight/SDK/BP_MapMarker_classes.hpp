#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x360 - 0x280)
// BlueprintGeneratedClass BP_MapMarker.BP_MapMarker_C
class ABP_MapMarker_C : public AMapMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_MapMarker_Ambient;                              // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_MapMarker_Burst;                                // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MapMarker_Orb;                                     // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_MapMarker_Smoke_Large;                          // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Orb_Timeline_Placed_28CADC004E62592A767214B357276673; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Spawn_Orb_Timeline__Direction_28CADC004E62592A767214B357276673; // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Spawn_Orb_Timeline;                                // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spawn_Beam_Timeline_Placed_C3EDC2CB49F0E24E0A4FD7B5F2326DA4; // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Spawn_Beam_Timeline__Direction_C3EDC2CB49F0E24E0A4FD7B5F2326DA4; // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Spawn_Beam_Timeline;                               // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, int32>                   CustomPrimitiveDataMap;                            // 0x2C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       LocalVectorsToTrace;                               // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       HitNormalList;                                     // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        LocalTraceDistanceSearch;                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfHits;                                      // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour2;                                           // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapMarker_C* GetDefaultObj();

	void Spawn_Orb_Timeline__FinishedFunc();
	void Spawn_Orb_Timeline__UpdateFunc();
	void Spawn_Beam_Timeline__FinishedFunc();
	void Spawn_Beam_Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapMarker(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
};

}


