#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x90 - 0x38)
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationOffset;                                    // 0x40(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x4C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x58(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE[0x1C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Attached : 1;                                      // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x84(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj();

	class UFXSystemComponent* GetSpawnedEffect();
};

// 0x30 (0x60 - 0x30)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationOffset;                                    // 0x40(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x4C(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDestroyAtEnd;                                     // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj();

};

}


