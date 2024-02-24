#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass wid_Benchmark_State.wid_Benchmark_State_C
class IWid_Benchmark_State_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWid_Benchmark_State_C* GetDefaultObj();

	void Start();
	void SetBenchmarkActor(class Abp_Benchmark_C* BActor);
};

}


