// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomSerialize.h"
#include "Containers/UnrealString.h"

TArray<uint8> UCustomSerialize::Custom_StringToBytes(FString input)
{
	TArray<uint8> Output;
	Output.Append((uint8*)TCHAR_TO_UTF8(*input), input.Len());
	return Output;
}
